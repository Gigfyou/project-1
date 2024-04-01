#include <stdio.h>
#include <sqlite3.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    sqlite3* db;
    char* zErrMsg = 0;
    int rc;

    rc = sqlite3_open("main.db", &db);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        exit(0);
    }
    else {
        fprintf(stderr, "Opened database successfully\n");
    }

    const char* sql = "SELECT NAME FROM main;";  // 替换your_table_name为你的表名 

    // 执行查询  
    sqlite3_stmt* stmt;
    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL错误: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }

    // 遍历查询结果  
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        const unsigned char* name = sqlite3_column_text(stmt, 0);  // 0是NAME字段的索引，从0开始  
        printf("%s\n", name);
    }

    // 释放查询语句  
    sqlite3_finalize(stmt);
    sqlite3_close(db);
}