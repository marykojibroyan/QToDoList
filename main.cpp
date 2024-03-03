#include "todolist.h"
#include "todolist.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *p = nullptr;
    todolist obj(p);
    obj.show();
    return a.exec();
}
