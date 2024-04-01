#pragma once						//头文件说明
#define _CRT_SECURE_NO_WARNINGS		//解决scanf报错问题
#define M 2							//学生个数
#define NAME 10						//姓名字段数

#include<stdio.h>					//
#include<stdlib.h>					//
#include<Windows.h>					//引入基本函数

//学生信息架构
struct studey
{
	char name[10];	//姓名
	char sex[2];	//性别
	int six;		//年龄
	int xh;			//学号
}STU[M];

//各功能函数
void code22();		//头部选择模块（实验）
void code21();		//程序模块（输入输出学生信息模块）
void code23();		//查询学生信息模块（总）
void code24();		//退出程序模块
void xmcx();		//姓名查询模块
void xbcx();		//性别查询模块
void xstj();		//学生信息添加模块（待开发）
void xxgx();		//学生信息更新模块（待开发）
void scxsxx();		//删除学生信息模块（待开发）
void xhcx();		//学号查询模块（待开发）
void grxxbgxt();	//信息报告系统（待开发）

//code 20-50 为实验代码片段


//code22 为头部选择模块（实验）
void code22() {
	printf("*********************欢迎进入学生管理系统**********************\n");
	printf("操作命令:\n");
	printf("添加学生信息:1\n删除学生信息:2(开发中)\n查找学生信息:3\n更新学生信息:4(开发中)\n退出系统:0\n");
	printf("***************************************************************\n");
	printf("请输入：");
	int a;
	scanf("%d", &a);
	switch (a)
	{
	case 1:code21(); break;
	case 2:break;
	case 3:code23(); break;
	case 4:break;
	case 0:code24(); break;
	default:printf("Error"); break;
	}
}
//code21 -以下为主程序模块（输入输出学生信息模块）
void code21() {
	int i;
	for (i = 0; i < M; i++) {
		printf("输入第%d个姓名：", i + 1);
		scanf("%s", &STU[i].name);
		printf("输入“%s”对应的性别：", STU[i].name);
		scanf("%s", &STU[i].sex);
		printf("输入“%s”对应的学号：", STU[i].name);
		scanf("%d", &STU[i].xh);
		printf("输入“%s”对应的年龄：", STU[i].name);
		scanf("%d", &STU[i].six);
	}
	printf("\n 序号 \t姓名 \t性别 \t年龄 \t学号 \n");
	for (i = 0; i < M; i++) {
		printf("%d \t%s \t%s \t%d \t%d \n", i + 1, STU[i].name, STU[i].sex, STU[i].six, STU[i].xh);
	}
	code22();
}
//code23 为查找学生信息模块
void code23() {
	int a;
	printf("查找姓名：1\n查找学号：2(开发中)\n查找性别：3(开发中)\n退出查询模块：0\n");
	printf("请输入查找序号：");
	scanf("%d", &a);
	switch (a)
	{
	case 1:xmcx(); break;
	case 2:break;
	case 3:xbcx(); break;
	case 4:break;
	case 0:code22(); break;
	default:break;
	}
}
void xmcx() {
	char name1[10];
	char* q = name1;
	int a = 0;
	printf("输入查询的姓名：");
	scanf("%s", &name1);
	for (int i = 0; i < M; i++) {
		if (strcmp(name1, STU[i].name) == 0) {					//使用strcmp函数：字符串比较函数：
			printf("查询成功");
			printf("\n 序号 \t姓名 \t性别 \t年龄 \t学号 \n");
			printf("%d \t%s \t%s \t%d \t%d \n", i + 1, STU[i].name, STU[i].sex, STU[i].six, STU[i].xh);
			a = 1;
		}
		else if (a == 0) {
			printf("查无此人,请添加或更新学生信息\n");
		}
	}
	code22();
}
void xbcx() {
	char xb[2];

}
//code24 为退出程序模块
void code24() {
	int i;
	//int a[6][8], b[4][5];//之前的
	
	printf("\n正在退出");
	for (i = 0; i < 8; i++) {
		Sleep(1000);
		printf(">");
	}
	exit(code22);
}