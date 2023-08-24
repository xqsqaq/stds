#ifndef CDATASOURCESQLITE_H
#define CDATASOURCESQLITE_H

#include "IDataSource.h"
#include<QSqlDatabase>
class CDataSourceSQLite : public IDataSource
{
public:
    CDataSourceSQLite();
    ~CDataSourceSQLite();
    virtual bool SelectCstudent(QList<Cstudent> &stuInfoList) override;
    virtual bool AddCstudent(Cstudent &stuInfo)override;
    virtual bool UpdateCstudent(Cstudent &stuInfo)override;
    virtual bool DeleteCstudent(int id)override;
private:
    QSqlDatabase m_db;//数据库连接

};

#endif // CDATASOURCESQLITE_H
