#include "widget.h"

#include <QApplication>
#include <CDataSourceSQLite.h>
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CDataSourceSQLite dataSource;
    QList<Cstudent> list;
    dataSource.SelectCstudent(list);
    qDebug()<<list.size();
    Widget w;
    w.show();

    return a.exec();
}
