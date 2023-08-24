#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"CDataSourceSQLite.h"
#include <AddStuInfoDialog.h>
#include<QStandardItemModel>
#include<QMenu>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE
const int _COL=7;//表的列数
const int _COL_ID=0;//id列
const int COL_NAME=1;
const int COL_SEX=2;
const int COL_PHONE=3;
const int COL_CET4=4;
const int COL_GPA=5;
const int COL_OVERALLSCORE=6;
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    bool appendToModel(Cstudent &stuInfo);
private slots:
    void on_btnAdd_clicked();
    //添加槽函数
    bool slot_addInfo(Cstudent &stuInfo);
    //修改信息
    bool slot_updata(Cstudent &stuInfo);
    //全选
    void on_All_clicked(bool checked);
    //全选菜单
    bool slot_itemchanged(QStandardItem*item);
    //弹出菜单
    bool slot_popmenu(const QPoint &pos);
    bool slot_actupdata();
    bool slot_actdel();
    void on_BtnDel_clicked();

private:
    void initUI();
private:
    Ui::Widget *ui;
    CDataSourceSQLite *m_dataSource;//数据源
    QStandardItemModel *m_standardModel;//model
    AddStuInfoDialog* m_addStuInfo;//添加学生信息
    QMenu*m_menu;//菜单
    QAction *m_updataaction;//修改菜单项
    QAction *m_delaction;//删除菜单项
};
#endif // WIDGET_H
