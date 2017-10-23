#include "mainwin.h"
#include "ui_mainwin.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QPushButton>
#include <QVBoxLayout>
#include <QStatusBar>

MainWin::MainWin(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::MainWin)
{
    m_ui->setupUi(this);
    // init
    isSaved = false;
    curFile = tr("untitled.txt");
    setWindowTitle(curFile);
    init_statusBar();   //初始化状态栏
}

MainWin::~MainWin()
{
    delete m_ui;
}

void MainWin::do_file_New()
{
    do_file_SaveOrNot();
    isSaved = false;
    curFile = tr("untitled.txt");
    setWindowTitle(curFile);
    m_ui->textEdit->clear();   //清空文本编辑器
    m_ui->textEdit->setVisible(true);   //设置文本编辑框可见
    second_statusLabel->setText(tr("Create ")+curFile);//状态栏显示文件打开成功
    //绑定信号槽，光标位置改变事件
    connect(m_ui->textEdit, SIGNAL(cursorPositionChanged()), this, SLOT(do_cursorChanged()));
}

//弹出是否保存文件的对话框
void MainWin::do_file_SaveOrNot()
{
    if(m_ui->textEdit->document()->isModified())
    {     //如果文本被更改过，弹出保存对话框
        QMessageBox msgBox;
        msgBox.setWindowTitle(tr("warning"));
        msgBox.setText(curFile + tr("You hasn't save,do it?"));
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        if(msgBox.exec()==QMessageBox::Yes)
        {
            do_file_Save();
        }
    }
}

void MainWin::do_file_Save()
{
    if(isSaved)   //如果是已经保存过的旧文件，直接保存
        saveFile(curFile);
    else          //如果是为保存过的新建文件，另存为
        do_file_SaveAs();
}

void MainWin::do_file_SaveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Save as"),curFile);
    if(!fileName.isEmpty())   //如果文件名不为空
       saveFile(curFile);
}

//保存文件内容,因为可能保存失败,所以具有返回值,来表明是否保存成功
bool MainWin::saveFile(const QString& fileName)    //实际存储文件的操作
{
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly|QFile::Text))
    {
        QMessageBox::warning(this,tr("save file"),tr("Can't save the file 1%:n%2").arg(fileName).arg(file.errorString()));
        return false;
    }
    QTextStream textStrm(&file);  //新建流对象,指向选定的文件
    textStrm<<m_ui->textEdit->toPlainText();   //将文本编辑器里的内容以纯文本的形式输出到流对象中
    isSaved = true;
    curFile = QFileInfo(fileName).canonicalFilePath();  //获得文件的标准路径
    setWindowTitle(curFile);    //将窗口名称改为现在窗口的路径
    second_statusLabel->setText(tr("Save successfully"));//状态栏显示文件保存成功
    return true;
}

// 打开文件
void MainWin::do_file_Open()
{
    do_file_SaveOrNot();
    //获得要打开的文件的名字
    QString fileName = QFileDialog::getOpenFileName(this);
    if(!fileName.isEmpty())
        do_file_Load(fileName);
    m_ui->textEdit->setVisible(true);  //文本编辑器可见
}

// 加载文件
bool MainWin::do_file_Load(const QString& fileName)
{
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly|QFile::Text))
    {
        QMessageBox::warning(this,tr("save file"),tr("Can't save the file 1%:n%2").arg(fileName).arg(file.errorString()));
        return false;
    }
    QTextStream textStrmIn(&file);  //新建流对象,指向选定的文件
    m_ui->textEdit->setText(textStrmIn.readAll());   //读取文件内容到文本编辑器中
    curFile = QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);    //设置窗口标题
    second_statusLabel->setText(tr("Open successfully"));//状态栏显示文件打开成功
    return true;
}

// “查找下一个”按钮的槽函数
void MainWin::show_findText()
{
    //获取行编辑器中的内容
    QString findText = find_textLineEdit->text();
    if(!m_ui->textEdit->find(findText,QTextDocument::FindBackward))
        QMessageBox::warning(this, tr("Search"), tr("Can't find %1").arg(findText));
}

// 初始化状态栏
void MainWin::init_statusBar()
{
    QStatusBar *bar = m_ui->statusBar;   //获取状态栏
    first_statusLabel = new QLabel();     //新建标签
    first_statusLabel->setMinimumSize(150,20); //设置标签最小尺寸
    first_statusLabel->setFrameShape(QFrame::WinPanel); //设置标签形状
    first_statusLabel->setFrameShadow(QFrame::Sunken); //设置标签阴影
    second_statusLabel = new QLabel;
    second_statusLabel->setMinimumSize(150,20);
    second_statusLabel->setFrameShape(QFrame::WinPanel);
    second_statusLabel->setFrameShadow(QFrame::Sunken);
    //添加标签到状态栏
    bar->addWidget(first_statusLabel);
    bar->addWidget(second_statusLabel);
    //初始化内容
    first_statusLabel->setText(tr("Welcome to opFim!"));
    second_statusLabel->setText(tr("Designed by Frank"));
}

// 获取光标位置
void MainWin::do_cursorChanged()
{
    //获取光标所在行号
    int rowNum = m_ui->textEdit->document()->blockCount();
    //获取光标所在列号
    const QTextCursor cursor = m_ui->textEdit->textCursor();
    int colNum = cursor.columnNumber();
    first_statusLabel->setText(tr("row:1% col:2%").arg(rowNum).arg(colNum));
}

/*
 * slot functions
*/
// 新建文件
void MainWin::on_actionNew_N_triggered()
{
    do_file_New();
}

// 保存文件
void MainWin::on_actionSave_S_triggered()
{
    do_file_Save();
}

// 另存为...
void MainWin::on_actionSave_As_M_triggered()
{
    do_file_SaveAs();
}

// 打开文件操作
void MainWin::on_actionOpen_O_triggered()
{
    do_file_Open();
}

// 关闭文件操作
void MainWin::on_actionClose_L_triggered()
{
    do_file_SaveOrNot();
    m_ui->textEdit->setVisible(false);   //设置文本编辑器不可见
    first_statusLabel->setText(tr("Editor closed"));
    second_statusLabel->setText(tr("Designed by Frank"));
}

// 退出操作
void MainWin::on_actionExit_Q_triggered()
{
    on_actionClose_L_triggered();   //先执行关闭操作
    qApp->quit();      //再退出系统,qApp 是指向应用程序的全局指针
}

// 撤销操作
void MainWin::on_actionRevoke_Z_triggered()
{
    m_ui->textEdit->undo();   //textEdit自带功能函数
}

// 剪切操作
void MainWin::on_actionCut_X_triggered()
{
    m_ui->textEdit->cut();    //textEdit自带功能函数
}

// 复制操作
void MainWin::on_actionCopy_C_triggered()
{
    m_ui->textEdit->copy();    //textEdit自带功能函数
}

// 粘贴操作
void MainWin::on_actionPaste_V_triggered()
{
    m_ui->textEdit->paste();   //textEdit自带功能函数
}

// 查找操作
void MainWin::on_actionSearch_triggered()
{
    //新建一个对话框,用于查找操作,this 表明它的父窗口是 MainWindow。
    QDialog *findDlg = new QDialog(this);
    //设置对话框的标题
    findDlg->setWindowTitle(tr("Search"));
    //将行编辑器加入到新建的查找对话框中
    find_textLineEdit = new QLineEdit(findDlg);
     //加入一个“查找下一个”的按钮
    QPushButton *findBtn = new QPushButton(tr("Search the next"),findDlg);
    //新建一个垂直布局管理器,并将行编辑器和按钮加入其中
    QVBoxLayout *layout = new QVBoxLayout(findDlg);
    layout->addWidget(find_textLineEdit);
    layout->addWidget(findBtn);
    findDlg->show();    //显示对话框
    //设置“查找下一个”按钮的单击事件和其槽函数的关联
    connect(findBtn, SIGNAL(clicked()), this, SLOT(show_findText()));
    second_statusLabel->setText(tr("Searching..."));//状态栏显示正在查找
}
