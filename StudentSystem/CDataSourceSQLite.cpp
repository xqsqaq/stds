#include "CDataSourceSQLite.h"
#include<QDebug>
#include<QSqlQuery>
CDataSourceSQLite::CDataSourceSQLite()
{
    m_db=QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("./Studinfor.db");
    if(!m_db.open())
    {
        qDebug()<<"file not open";
        qDebug() << "sql drivers" << QSqlDatabase::drivers();
        return;
    }
    QSqlQuery query;
    QString sql=QString("create table if not exists tb_student"
                          "(id int primary key not null,"
                          "name varchar(20),"
                          "sex varchar(2),"
                          "phone varchar(11),"
                          "cet4 int,"
                          "gpa real,"
                          "overallScore real);");
    if(!query.exec(sql))
    {
        qDebug()<<"not sql";
    }
    m_db.close();
}

CDataSourceSQLite::~CDataSourceSQLite()
{

}

bool CDataSourceSQLite::SelectCstudent(QList<Cstudent> &stuInfoList)
{
    if(!m_db.open()){
        qDebug()<<"file not select";
        return false;
    }
    QSqlQuery query;
    QString sql="Select * from tb_student;";
    if(!query.exec(sql)){
        qDebug()<<"file not sql";
        return false;
    }
    while(query.next())
    {
        Cstudent stuInfo;
        int id=query.value("id").toInt();
        QString name=query.value("name").toString();
        QString sex=query.value("sex").toString();
        QString phone=query.value("phone").toString();
        int cet4=query.value("cet4").toInt();
        double gpa=query.value("id").toInt();
        stuInfo.setData(id,name,sex,phone,cet4,gpa);
        stuInfoList.append(stuInfo);
    }
    m_db.close();
    return true;
}

bool CDataSourceSQLite::AddCstudent(Cstudent &stuInfo)
{
    if(!m_db.open()){
        qDebug()<<"file not add";
        return false;
    }
    QSqlQuery query;
    query.prepare("insert into tb_student(id,name,sex,phone,cet4,gpa,overallScore)values(:id,:name,:sex,:phone,:cet4,:gpa,:overallScore)");
    query.bindValue(":id",stuInfo.id());
    query.bindValue(":name",stuInfo.name());
    query.bindValue(":sex",stuInfo.sex());
    query.bindValue(":phone",stuInfo.phone());
    query.bindValue(":cet4",stuInfo.cet());
    query.bindValue(":gpa",stuInfo.gpa());
    query.bindValue(":overallScore",stuInfo.overallScore());
    if(!query.exec())
    {
        qDebug()<<"file not query.exec"<<query.lastQuery();
        return false;
    }
    m_db.close();
    return true;
}

bool CDataSourceSQLite::UpdateCstudent(Cstudent &stuInfo)
{
    if(!m_db.open()){
        qDebug()<<"file not updata";
        return false;
    }
    QSqlQuery query;
    query.prepare("update tb_student set name=:name,sex=:sex,phone=:phone,cet4=:cet4,gpa=:gpa,overallScore=:overallScore where id=:id");
    query.bindValue(":id",stuInfo.id());
    query.bindValue(":name",stuInfo.name());
    query.bindValue(":sex",stuInfo.sex());
    query.bindValue(":phone",stuInfo.phone());
    query.bindValue(":cet4",stuInfo.cet());
    query.bindValue(":gpa",stuInfo.gpa());
    query.bindValue(":overallScore",stuInfo.overallScore());
    if(!query.exec())
    {
        qDebug()<<"file not query.exec"<<query.lastQuery();
        m_db.close();
        return false;
    }
    m_db.close();
    return true;
}

bool CDataSourceSQLite::DeleteCstudent(int id)
{
    if(!m_db.open()){
        qDebug()<<"file not delete";
        return false;
    }
    QSqlQuery query;
    QString sql=QString("delete from tb_student where id=%1").arg(id);
    if(!query.exec(sql))
    {
        qDebug()<<"file not delete.exec()";
        return false;
    }
    m_db.close();
    return true;
}
