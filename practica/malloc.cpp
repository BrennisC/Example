#include <iostream>
#include <sqlite3.h>
#define CHALLENGES_FIELD_ID 0
#define CHALLENGES_FIELD_NAME 1
#define CHALLENGES_FIELD_DIFFICULTY 2
#define CHALLENGES_FIELD_DATE 3
using namespace std;
static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
    for (int i = 0; i < argc; i++)
    {
        cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << endl;
    }
    cout << endl;
    return 0;
}

int main(int argc, char *argv[])
{
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;

    rc = sqlite3_open("brennis.db", &db);
    if (rc)
    {
        cout << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return (1);
    }

    const char *sql = "SELECT * FROM challenges";

    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if (rc != SQLITE_OK)
    {
        cerr << "SQL error: " << zErrMsg << endl;
        sqlite3_free(zErrMsg);
    }
    sqlite3_close(db);

    return 0;
}
