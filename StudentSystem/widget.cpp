#include "widget.h"
#include "ui_widget.h"
#include"AddStuInfoDialog.h"
#include <QMessageBox>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget),
    m_dataSource(NULL),
    m_standardModel(NULL),
    m_addStuInfo(NULL),
    m_menu(NULL),
    m_updataaction(NULL),
    m_delaction(NULL)
{
    ui->setupUi(this);
    //实例化数据源
    m_dataSource=new CDataSourceSQLite();
    m_addStuInfo=new AddStuInfoDialog(this);
    //关联槽函数
    connect(m_addStuInfo,&AddStuInfoDialog::addInfo,this,&Widget::slot_addInfo);
    connect(m_addStuInfo,&AddStuInfoDialog::sig_updata,this,&Widget::slot_updata);
    //初始化界面
    initUI();
    qRegisterMetaType<Cstudent>("Cstudent");
    qRegisterMetaType<Cstudent>("Cstudent&");
}

Widget::~Widget()
{
    delete m_dataSource;
    delete ui;
}

bool Widget::appendToModel(Cstudent &stuInfo)
{
    QStandardItem *itemid=new QStandardItem(QString::number(stuInfo.id()));
    itemid->setCheckable(true);
    QStandardItem *itemname=new QStandardItem(stuInfo.name());
    QStandardItem *itemsex=new QStandardItem(stuInfo.sex());
    QStandardItem *itemphone=new QStandardItem(stuInfo.phone());
    QStandardItem *itemcet=new QStandardItem(QString::number(stuInfo.cet()));
    QStandardItem *itemgpa=new QStandardItem(QString::number(stuInfo.gpa()));
    QStandardItem *itemoverallscore=new QStandardItem(QString::number(stuInfo.overallScore()));
    QList<QStandardItem*>rowItem;
    rowItem.append(itemid);
    rowItem.append(itemname);
    rowItem.append(itemsex);
    rowItem.append(itemphone);
    rowItem.append(itemcet);
    rowItem.append(itemgpa);
    rowItem.append(itemoverallscore);
    m_standardModel->appendRow(rowItem);

    return true;
}

void Widget::initUI()
{
    //实例化model
    m_standardModel=new QStandardItemModel(this);
    //勾选复选框槽函数
    connect(m_standardModel,&QStandardItemModel::itemChanged,this,&Widget::slot_itemchanged);
    //实例化菜单项
    m_menu=new QMenu(this);
    m_updataaction=new QAction("修改",m_menu);
    m_delaction=new QAction("删除",m_menu);
    m_menu->addAction(m_updataaction);
    m_menu->addAction(m_delaction);
    //设置tableview菜单策略
    ui->tdStdent->setContextMenuPolicy(Qt::CustomContextMenu);
    //关联槽函数
    connect(ui->tdStdent,&QTreeView::customContextMenuRequested,this,&Widget::slot_popmenu);//弹出菜单
    connect(m_updataaction,&QAction::triggered,this,&Widget::slot_actupdata);
    connect(m_delaction,&QAction::triggered,this,&Widget::slot_actdel);
    //查询数据
    QList<Cstudent> stuInfoList;
   bool res= m_dataSource->SelectCstudent(stuInfoList);
    if(!res)
   {
       QMessageBox::information(this,"提示","查询失败");
        return;
   }
    qDebug()<<stuInfoList.size();
    for(int i=0;i<stuInfoList.size();i++)
    {
        appendToModel(stuInfoList[i]);
    }
    //添加表头
    QStringList headerList;
    headerList<<"学号"<<"姓名"<<"性别"<<"手机号"<<"cet4"<<"绩点"<<"综合成绩";
    m_standardModel->setHorizontalHeaderLabels(headerList);
    ui->tdStdent->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tdStdent->setModel(m_standardModel);
    for(int i=0;i<_COL;i++)
    {
        ui->tdStdent->setColumnWidth(i,width()/7);
    }
}


void Widget::on_btnAdd_clicked()
{
    m_addStuInfo->setIsupdata(true);
    m_addStuInfo->show();
}

bool Widget::slot_addInfo(Cstudent &stuInfo)
{
    bool res=m_dataSource->AddCstudent(stuInfo);
    if(!res)
    {
        QMessageBox::information(this,"提示","插入数据库失败");
        return false;
    }
    appendToModel(stuInfo);
    return true;
}

bool Widget::slot_updata(Cstudent &stuInfo)
{
   int ret= m_dataSource->UpdateCstudent(stuInfo);
    if(!ret)
   {
        QMessageBox::information(this,"提示","修改失败");
        return false;
   }
    QMessageBox::information(this,"提示","修改成功");
    return true;
}


void Widget::on_All_clicked(bool checked)
{
    for(int i=0;i<m_standardModel->rowCount();++i)
    {
        if(checked)
        {
            m_standardModel->item(i)->setCheckState(Qt::Checked);
        }
        else{
            m_standardModel->item(i)->setCheckState(Qt::Unchecked);
        }
    }
}
//全选
bool Widget::slot_itemchanged(QStandardItem *item)
{
    if(m_standardModel->indexFromItem(item).column()>0)return false;
    for(int i=0;i<m_standardModel->rowCount();i++)
    {
        if(m_standardModel->item(i)->checkState()!=Qt::Checked)
            return false;
    }
    ui->All->setChecked(true);
    return true;
}

bool Widget::slot_popmenu(const QPoint &pos)
{
    if(m_standardModel->itemFromIndex(ui->tdStdent->indexAt(pos))!=NULL)
    m_menu->exec(QCursor::pos());
    return true;
}

bool Widget::slot_actupdata()
{
    m_addStuInfo->setIsupdata(true);//修改标识
    int row=ui->tdStdent->currentIndex().row();
    int id=m_standardModel->item(row,_COL_ID)->text().toInt();
    QString name=m_standardModel->item(row,COL_NAME)->text();
    QString sex=m_standardModel->item(row,COL_SEX)->text();
    QString phone=m_standardModel->item(row,COL_PHONE)->text();
    int cet4=m_standardModel->item(row,COL_CET4)->text().toInt();
    double gpa=m_standardModel->item(row,COL_GPA)->text().toDouble();
    m_addStuInfo->display(id,name,sex,phone,cet4,gpa);
    m_addStuInfo->show();

    return true;
}

bool Widget::slot_actdel()
{
    int row= ui->tdStdent->currentIndex().row();
    int id=m_standardModel->item(row)->text().toInt();
    m_dataSource->DeleteCstudent(id);
    m_standardModel->removeRow(row);
    return true;
}


void Widget::on_BtnDel_clicked()
{
    QMap<int,QStandardItem*> delMap;//记录待删除的行
    //删除表
    //删除数据库
    for(int i=0;i<m_standardModel->rowCount();++ i)
    {
        QStandardItem *item=m_standardModel->item(i);
        if(item->checkState()==Qt::Checked)
        {
            delMap.insert(i,item);
        }
    }
    if(delMap.size()<1)
    {
        return;
    }
    int res=QMessageBox::information(this,"提示","是否要删除",QMessageBox::Yes|QMessageBox::No);
    if(res==QMessageBox::No)return ;
    QList<int> keylist=delMap.keys();
    for(int key=keylist.size()-1;key>=0;--key)
    {
        if(m_dataSource->DeleteCstudent(delMap.value(keylist[key])->text().toInt()))
        {
            m_standardModel->removeRow(keylist[key]);
        }
    }
}

