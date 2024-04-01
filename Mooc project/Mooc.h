#pragma once
#define _CRT_SECURE_NO_WARNINGS		//解决scanf报错问题
#include<stdio.h>					
#include<stdlib.h>
#include<Windows.h>	
#include<math.h>					//引入函数
#include<malloc.h>
//函数预定义	code11-20;
void code11();
void code12();
void code13();
void code14();
void code15();
void code16();
void code17();
void code18();
void code19();
void code20();
//

void code11() {
	char* str;

	/* 最初的内存分配 */
	str = (char*)malloc(15);
	strcpy(str, "runoob");
	printf("String = %s,  Address = %u\n", str, str);
	/* 重新分配内存 */
	str = (char*)realloc(str, 25);
	strcat(str, ".com");
	printf("String = %s,  Address = %u\n", str, str);
	free(str);
	return(0);
}
void code12() {

}


struct Student {
	char cName[20];
	int iNumber;
	struct Student* pNext;
};
int iCount;
struct Student* Create(){
	struct Student* pHend = NULL;
	struct Student* pEnd, * pNew;
	iCount = 0;
	pEnd = pNew = (struct Student*)malloc(sizeof(struct Student));
	printf("请输入姓名学号：");
	scanf("%s", &pNew->CName);
	scanf("%d", &pNew->INumber);
	while (pNew->INumber!=0)
	{
		iCount++;
		if (iCount == 1) {
			pNew->pNext = NULL;
			pEnd = pNew;
			pHend = pNew;
		}
		else {
			pNew->pNext = NULL;
			pEnd->pNext = pNew;
			pEnd = pNew;
		}

	}
}
