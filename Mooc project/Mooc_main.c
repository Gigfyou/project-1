#define _CRT_SECURE_NO_WARNINGS		//���scanf��������
#include<stdio.h>			
#include"Mooc.h"
#include<stdlib.h>
#include<math.h>
#include<Windows.h>					//���뺯��
//����Ԥ����	code1-10;
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

//���ϴ���ΪMooc��Ƶ�еĴ���
void add(List *pList,int number) {
	//����б�
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//�ҵ��б�
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
//����Ϊ����

struct Student {
	char CName[20];
	int INumber;
	struct Student* pNext;
};
int iCount;//����ȫ�ֱ�������ʾ������

void code2() {
		printf("%f\n", log(10)); //��eΪ�׵Ķ������� 
		printf("%f\n", log2(6)); //��10Ϊ�׵Ķ������� 
		printf("%f\n", log(8) / log(2)); //����log2^8,���û��׹�ʽ 
		printf("%f\n", exp(1)); //������Ȼ����e
		return 0;

}
struct Student* Creata() { //����������Create
	struct Student* pHead = NULL;//��ʼ������
	struct Student* pEnd, * pNew;//
	iCount = 0;//��ʼ��������
	pEnd = pNew = (struct Student*)malloc(sizeof(struct Student));//��̬����һ���ڴ�ռ�
	printf("������ѧ��������ѧ�ţ�");//����ѧ����Ϣ
	scanf("%s", &pNew->CName);
	scanf("%s", &pNew->INumber);
	while(pNew->INumber!=0){//�������ӵ�ѧ�Ų�Ϊ��ʱ
		iCount++;//�������һ
		if (iCount == 1) {//����ǵ�һ�����
			pNew->pNext = pHead; //ָ��Ϊ��
			pEnd = pNew;//�����¼���Ľ��
			pHead = pNew;//ͷָ��ָ���׽��
		}
		else {
			pNew->pNext = NULL;//�½���ָ��Ϊ��
			pEnd->pNext = pNew;//ԭ����β���ָ���½��
			pEnd = pNew;//pEndָ���½��
		}
		pNew = (struct Student*)malloc(sizeof(struct Student));//�ٴη������ڴ�ռ�
		scanf("%s", &pNew->CName);
		scanf("%s", &pNew->INumber);
	}
	free(pNew); //�ͷſռ�
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