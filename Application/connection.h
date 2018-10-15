#ifndef CONNECTION_H
#define CONNECTION_H

#include <QtSql>

class Connection
{
public:
    Connection();
    virtual ~Connection();

public:
    void db_connection();
    QSqlDatabase db;



};

#endif // CONNECTION_H
