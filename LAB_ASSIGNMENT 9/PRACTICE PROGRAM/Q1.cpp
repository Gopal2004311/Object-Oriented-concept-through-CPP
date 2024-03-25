#include <iostream>
#include<windows.h>
#include<mysql.h>
using namespace std;
const char* server = "localhost";
const char* password = "";
const char* database = "Advance_php";
const char* user = "root";
unsigned int port = 3306;
const char* unixSocket = NULL;
unsigned long clientFlag = 0;
MYSQL* connectDatabase()
{
    MYSQL* con;
    con = mysql_init(0);
    con = mysql_real_connect(con, server, user, password, database, port, unixSocket, clientFlag);
    if (con)
    {
        cout << "Connected to database!!" << endl;
        return con;
    }
    else {
        cerr << "Failed:" << mysql_error(con) << endl;
        return NULL;
    }
}
int main()
{
    MYSQL* c;
    c = connectDatabase();
    if (c != NULL)
    {
        cout << "connect" << endl;
    }
    else
        cout << "hello world";
    return 0;
}