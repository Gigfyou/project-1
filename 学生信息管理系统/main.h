#pragma once						//ͷ�ļ�˵��
#define _CRT_SECURE_NO_WARNINGS		//���scanf��������
#define M 2							//ѧ������
#define NAME 10						//�����ֶ���

#include<stdio.h>					//
#include<stdlib.h>					//
#include<Windows.h>					//�����������

//ѧ����Ϣ�ܹ�
struct studey
{
	char name[10];	//����
	char sex[2];	//�Ա�
	int six;		//����
	int xh;			//ѧ��
}STU[M];

//�����ܺ���
void code22();		//ͷ��ѡ��ģ�飨ʵ�飩
void code21();		//����ģ�飨�������ѧ����Ϣģ�飩
void code23();		//��ѯѧ����Ϣģ�飨�ܣ�
void code24();		//�˳�����ģ��
void xmcx();		//������ѯģ��
void xbcx();		//�Ա��ѯģ��
void xstj();		//ѧ����Ϣ���ģ�飨��������
void xxgx();		//ѧ����Ϣ����ģ�飨��������
void scxsxx();		//ɾ��ѧ����Ϣģ�飨��������
void xhcx();		//ѧ�Ų�ѯģ�飨��������
void grxxbgxt();	//��Ϣ����ϵͳ����������

//code 20-50 Ϊʵ�����Ƭ��


//code22 Ϊͷ��ѡ��ģ�飨ʵ�飩
void code22() {
	printf("*********************��ӭ����ѧ������ϵͳ**********************\n");
	printf("��������:\n");
	printf("���ѧ����Ϣ:1\nɾ��ѧ����Ϣ:2(������)\n����ѧ����Ϣ:3\n����ѧ����Ϣ:4(������)\n�˳�ϵͳ:0\n");
	printf("***************************************************************\n");
	printf("�����룺");
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
//code21 -����Ϊ������ģ�飨�������ѧ����Ϣģ�飩
void code21() {
	int i;
	for (i = 0; i < M; i++) {
		printf("�����%d��������", i + 1);
		scanf("%s", &STU[i].name);
		printf("���롰%s����Ӧ���Ա�", STU[i].name);
		scanf("%s", &STU[i].sex);
		printf("���롰%s����Ӧ��ѧ�ţ�", STU[i].name);
		scanf("%d", &STU[i].xh);
		printf("���롰%s����Ӧ�����䣺", STU[i].name);
		scanf("%d", &STU[i].six);
	}
	printf("\n ��� \t���� \t�Ա� \t���� \tѧ�� \n");
	for (i = 0; i < M; i++) {
		printf("%d \t%s \t%s \t%d \t%d \n", i + 1, STU[i].name, STU[i].sex, STU[i].six, STU[i].xh);
	}
	code22();
}
//code23 Ϊ����ѧ����Ϣģ��
void code23() {
	int a;
	printf("����������1\n����ѧ�ţ�2(������)\n�����Ա�3(������)\n�˳���ѯģ�飺0\n");
	printf("�����������ţ�");
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
	printf("�����ѯ��������");
	scanf("%s", &name1);
	for (int i = 0; i < M; i++) {
		if (strcmp(name1, STU[i].name) == 0) {					//ʹ��strcmp�������ַ����ȽϺ�����
			printf("��ѯ�ɹ�");
			printf("\n ��� \t���� \t�Ա� \t���� \tѧ�� \n");
			printf("%d \t%s \t%s \t%d \t%d \n", i + 1, STU[i].name, STU[i].sex, STU[i].six, STU[i].xh);
			a = 1;
		}
		else if (a == 0) {
			printf("���޴���,����ӻ����ѧ����Ϣ\n");
		}
	}
	code22();
}
void xbcx() {
	char xb[2];

}
//code24 Ϊ�˳�����ģ��
void code24() {
	int i;
	//int a[6][8], b[4][5];//֮ǰ��
	
	printf("\n�����˳�");
	for (i = 0; i < 8; i++) {
		Sleep(1000);
		printf(">");
	}
	exit(code22);
}