#include "AddStuInfoDialog.h"
#include "ui_AddStuInfoDialog.h"
#include<QDebug>
#include<QMessageBox>
#include"cstudent.h"
AddStuInfoDialog::AddStuInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddStuInfoDialog),
    m_isupdata(false)
{
    //确定的界面设置
    ui->setupUi(this);
    this->setWindowTitle("添加/修改学生信息");
    ui->edid->setPlaceholderText("请输入四位数字的学号");
    QRegExp regid("^[0-9]{4}$");//正则表达式设置
    ui->edid->setValidator(new QRegExpValidator(regid,this));

    ui->edname->setPlaceholderText("请输入学生姓名");

    ui->edphone->setPlaceholderText("请输入学生手机号");
     QRegExp regphone("^[0-1][1-9]{10}$");
     ui->edphone->setValidator(new QRegExpValidator(regphone,this));

    ui->sexbox->addItem("男");
    ui->sexbox->addItem("女");
    ui->cet4box->setRange(0,750);
    ui->gpabox->setRange(0.0,4.0);
}

AddStuInfoDialog::~AddStuInfoDialog()
{
    delete ui;
}

void AddStuInfoDialog::InitUI()
{
    qDebug()<<"nihao";

}

bool AddStuInfoDialog::clearData()
{
     ui->edid->clear();
     ui->edphone->clear();
     ui->edname->clear();
     ui->gpabox->setValue(0.0);
     ui->cet4box->setValue(0);
     return true;
}

bool AddStuInfoDialog::display(int id, QString name, QString sex,QString phone,  int cet, double gpa)
{
     ui->edid->setText(QString("%1").arg(id,4,10,QLatin1Char('0')));
     ui->edname->setText(name);
     ui->sexbox->setCurrentText(sex);
     ui->edphone->setText(phone);
     ui->gpabox->setValue(gpa);
     ui->cet4box->setValue(cet);
     return true;

}

void AddStuInfoDialog::setIsupdata(bool isupdata)
{
     m_isupdata=isupdata;
}

void AddStuInfoDialog::on_pushButton_clicked()
{
     //设置标题窗口
     this->setWindowTitle("添加/修改学生信息");
    //确定:判断输入信息的合法性
    int idlens=ui->edid->text().size();
    if(idlens!=4)
    {
        QMessageBox::information(this,"学号错误","学号长度不满足4位");
        return ;
    }
    int phonelens=ui->edphone->text().size();
    if(phonelens!=11)
    {
        QMessageBox::information(this,"手机号错误","手机号长度不满足11位");
        return ;
    }
    int id=ui->edid->text().toInt();
    QString name=ui->edname->text();
    QString sex=ui->sexbox->currentText();
    QString phone=ui->edphone->text();
    int cet4=ui->cet4box->value();
    double gpa=ui->gpabox->value();
    Cstudent stuInfo;
    stuInfo.setData(id,name,sex,phone,cet4,gpa);
    if(m_isupdata)
    {
        emit sig_updata(stuInfo);
    }
    emit addInfo(stuInfo);

    clearData();

}


void AddStuInfoDialog::on_pushButton_2_clicked()
{

}

