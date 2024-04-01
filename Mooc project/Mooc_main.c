#define _CRT_SECURE_NO_WARNINGS		//解决scanf报错问题
#include<stdio.h>			
#include"Mooc.h"
#include<stdlib.h>
#include<math.h>
#include<Windows.h>					//引入函数
//函数预定义	code1-10;
void code1();						
void code2();
void code3();
void code4();
void code5();
void code6();
void code7();
void code8();
void code9();
void code10();

void code1() {
	//code1();
	struct stu {
		int xh;
		int class;

	};
	struct stu stu1[2] = { 0,1,5,4 };
	struct stu* p = &stu1;
	//printf("%d---%d\n", p->xh, p->class);
	//p++;
	//printf("%d---%d\n", p->xh, p->class);
	for (int i = 0; i < 2; i++) {
		printf("%d--%d\n", p->xh, p->class);
		p++;
	}
}
typedef struct _node {
	int value;
	struct _node* next;
} Node;
typedef struct _list {
	Node* head;
	//Node* tail;
}List;
//void add(Node* head,int number);
//void LList( int argc ,char const *argv[]) {
//	List list;
//	//Node* head = NULL;
//	int number;
//	list.head = NULL;
//	do {
//		scanf("%d", &number);
//		if (number != -1) {
//			head = add(&list, number);
//		}
//	} while (number != -1);
//	return 0;
//}

//以上代码为Mooc视频中的代码
void add(List *pList,int number) {
	//添加列表
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//找到列表
	Node* last =pList->head;
	if (last) {
		while (last->next) {
			last = last->next;
		}
		last->next = p;
	}
	else {
		pList->head = p;
	}
}
//以上为链表

struct Student {
	char CName[20];
	int INumber;
	struct Student* pNext;
};
int iCount;//定义全局变量，表示链表长度

void code2() {
		printf("%f\n", log(10)); //以e为底的对数函数 
		printf("%f\n", log2(6)); //以10为底的对数函数 
		printf("%f\n", log(8) / log(2)); //计算log2^8,运用换底公式 
		printf("%f\n", exp(1)); //计算自然常数e
		return 0;

}
struct Student* Creata() { //创建链表函数Create
	struct Student* pHead = NULL;//初始化链表
	struct Student* pEnd, * pNew;//
	iCount = 0;//初始化链表长度
	pEnd = pNew = (struct Student*)malloc(sizeof(struct Student));//动态分配一块内存空间
	printf("请输入学生姓名和学号：");//输入学生信息
	scanf("%s", &pNew->CName);
	scanf("%s", &pNew->INumber);
	while(pNew->INumber!=0){//当新增加的学号不为空时
		iCount++;//结点数加一
		if (iCount == 1) {//如果是第一个结点
			pNew->pNext = pHead; //指向为空
			pEnd = pNew;//跟踪新加入的结点
			pHead = pNew;//头指针指向首结点
		}
		else {
			pNew->pNext = NULL;//新结点的指针为空
			pEnd->pNext = pNew;//原来的尾结点指向新结点
			pEnd = pNew;//pEnd指向新结点
		}
		pNew = (struct Student*)malloc(sizeof(struct Student));//再次分配结点内存空间
		scanf("%s", &pNew->CName);
		scanf("%s", &pNew->INumber);
	}
	free(pNew); //释放空间
	return pHead;
}
void code3() {
	int x=9, x2;
	for (int i = 0; i < 10; i++) {
		x = x % 2;
		printf("%d\n", x);
	}
}
void main() {
	//Creata();
	//code2();
	code3();

}