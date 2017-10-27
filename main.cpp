#include "mainwin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationVersion("V0.9");
    MainWin win;
    win.show();

    return app.exec();
}
