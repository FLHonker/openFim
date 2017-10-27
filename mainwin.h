#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

namespace Ui {
class MainWin;
}

class MainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWin(QWidget *parent = 0);
    ~MainWin();

private slots:
    void on_actionNew_N_triggered();
    void on_actionSave_S_triggered();
    void on_actionSave_As_M_triggered();
    void on_actionOpen_O_triggered();
    void on_actionClose_L_triggered();
    void on_actionExit_Q_triggered();
    void on_actionRevoke_Z_triggered();
    void on_actionCut_X_triggered();
    void on_actionCopy_C_triggered();
    void on_actionPaste_V_triggered();
    void show_findText();    //在该函数中实现查找字符串的功能
    void on_actionSearch_triggered();
    void do_cursorChanged(); //获取光标位置信息

    void on_actionAbout_B_triggered();

    void on_actionHelp_P_triggered();

private:
    Ui::MainWin *m_ui;
    bool isSaved;    //文件是否已经保存
    QString curFile;  //当前文件名
    QLineEdit *find_textLineEdit;    //声明一个行编辑器,用于输入要查找的内容
    QStatusBar *bar;   //状态栏
    //声明两个标签对象
    QLabel *first_statusLabel;
    QLabel *second_statusLabel;
    QDialog *findDlg;     //查找对话框
    QPushButton *findBtn;  //查找按钮

    void do_file_New();    //新建文件
    void do_file_SaveOrNot();  //修改过的文件是否保存
    void do_file_Save();    //保存文件
    void do_file_SaveAs();   //文件另存为
    bool saveFile(const QString &fileName);     //存储文件
    void do_file_Open();     //打开文件
    bool do_file_Load(const QString& fileName); //读取文件
    void init_statusBar();   //初始话状态栏
};

#endif // MAINWIN_H
