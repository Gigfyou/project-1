#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//#include"s.h"//���������ļ�����
#include"main.h"//���������ļ�����
#include<stdlib.h>
#include<windows.h>
//int  code1();
//void code2();
//void code3();
//
//int code1(int a, int b) {
//	int c;
//	if (a > 0 && b > 0) {
//		if (a > b) {
//			c = a;
//		}
//		else {
//			c = b;
//		}
//	}
//	else
//	{
//		c = 0;
//	}
//	return c;
//}
//void code3() {
//	int s1, s2;
//	printf("�������֣�");
//	scanf_s("%d%d", &s1, &s2);
//	s1 = code1(s1, s2);
//	if (s1 == 0) {
//		printf("Error");
//	}
//	else {
//		printf("%d", s1);
//	}
//}
//void code2() {
//	int a[20][10] = { 0 };
//	for (int i = 0; i < 20; i++) {
//		if (i % 10 == 0) {
//			printf("\n");
//		}
//		for (int j = 0; j < 10; j++) {
//			printf("%4d", a[i][j]);
//		}
//	}
//}
//
//int code6() {
//	//�ṹ�����
//	struct student
//	{
//		int xh;
//		char name[10];
//		int six;
//	}STU1[2] = { "yuxs" };
//	int n = 20221;
//	int s = 18;
//	char str[10] = "yuxs";
//	for (int i = 0; i < 2; i++) {
//		STU1[i].xh = n;
//		n++;
//		STU1[i].six = s;
//		s++;
//		STU1[i].name[3] = "str";
//	}
//	printf("����%s--ѧ��%d--����%d", STU1[1].name, STU1[0].xh, STU1[0].six);
//	return 0;
//}
//int code10() {
//	//
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 'a' && ch <= 'u') {
//		ch = ch + 5;
//	}
//	else if (ch >= 'v' && ch <= 'z') {
//		ch = ch - 26 + 5;
//	}
//	printf("%c\n", ch);
//	return 0;
//}
//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n + fun(n - 1);
//}
////c���Կ��Բ�����Ŀcode5
//void code5() {
//	/* �˵㿪ʼÿ��Сʱ������� */
//	int a[19] = { 1265,968,1173,1379,1369,1452,1123,734,627,735,658,1387,1235,740,520,371,0,0,0 };
//	/* �˵㿪ʼÿ��Сʱ�������� */
//	int b[19] = { 0,0,473,756,786,1052,925,987,745,918,958,989,957,1042,1520,837,1146,928,717 };
//	/*�����ڴ�������Ƴ��򣬲���ɾ������*/
//	int t = 5000;
//	int warn = t * 0.9, i, n=0, s=0;
//	for (i = 0; i < 19; i++) {
//		s += a[i] - b[i];
//		if (s > warn) {
//			printf("����Ԥ��%d ʱ��%d", s,8+i/2);
//			if (i % 2 == 1) {
//				printf("��\n");
//			}
//			else printf("\n");
//		}
//		if (s > t) {
//			n++;
//		}
//	}
//	printf("��%d��������",n);
//}
//
//
//
//
//
//
////ָ������
//int code11() {
//	int n = 1, i, t = 0;
//	double s = 0.0;
//	for (i = 0; i < 500; i++) {
//		t = n * (2 * n - 1);
//		s += 1.0 / t;
//		n++;
//	}
//	printf("%.5lf", s);
//}
//int code12() {
//	int s = 0, s1 = 0;
//	Sleep(1000);
//	s = max(6, 8);
//	s1 = min(6, 8);
//	printf("%d\n%d", s, s1);
//}
////�����������ch��xh�����������������㣬��������Ķ����������ֵ
//void code13(int *p) {
//	int a = 5, b = 3, c = 9,s=0;
//	*p = (a = c - a, b);
//}
//
//void code13_1() {
//	int p;
//	code13(&p);
//	printf("yu-%d", p);
//}
////�ݹ麯������
//int code14(int n) {
//	if (n == 0) {
//		return 0;
//	}
//	return code14(n - 1);
//	return n;
//}
//void code14_1() {
//	int s = 0;
//	s+=code14(5);
//	printf("rt-%d", s);
//}
//
//
//
//
//
//
//
void jc() {
	int n = 100,s=0;
	for (int i = 1; i <= 10; i++) {
		n = n / 2;
		s = s + n;

		printf("%d\n", s);
	}
}
void code15() {
/*	int x = 1, s = 0;
	scanf("%d", &s);
	for (int i=1; i <= s; i++) {
		x = x * i;
	}
	printf("%d", x);*/
	jc();
}
void code16() {
	int n = 58, s = 0, T[10] = { 0 }, T1[10] = {0};
	for (int j = 1;j<5;j++){
		for (int i = 0; i < 10; i++) {

		}
	}
}
void Code17(int aa[]) {
	//int x, N, ex;
	//for (int i = 1; i < N; i++) {
	//	ex = 0;
	//	/*for(int )*/
	//}

}
int P5703(int a,int b) {
	if (a <= 0 || b <= 0) {
		return 0;
	}else 
		return a * b;
}
void P5703_Main() {
	int a, b;
	printf("���������������Զ��ŷָ���");
	scanf("%d,%d", &a, &b);
	int s = P5703(a, b);
	printf("sum= %d", s);
}
//B2025 ����ַ�����
void B2025() {
	int x, y, i;

}
void XX() {
	float x, y, a;
	printf("\033[1m\033[31m\033[5m");
	for (y = 1.3f; y > -1.1f; y -= 0.1f) {
		for (x = -1.3f; x < 1.3f; x += 0.05f) {
			a = x * x + y * y - 1;
			if (a * a * a - x * x * y * y *y< 0) {

				printf("*");
			}
			else {
				printf(" ");
			}
		}
		puts("");
	}
	printf("\033[0m");
}
void LX() {
	int n;
	printf("������n��");
	scanf("%d", &n);

}
////code1--20
void main() {
	int a;
	printf("\n******************ʵ���Դ�����Ŀ�������ģ��***********************\n");
	printf("���д���ģ�飺\n code1-ѧ����Ϣ����ϵͳ(����): 1 \n code2-����ͼ��--25��2 \n code3-������Ŀϵͳ: 3 \n");
	printf("�������еĳ��������ţ�");
	scanf("%d", &a);
	switch (a)
	{
	case 1:code22(); break;//code22();//ѧ����Ϣ����ϵͳ�������
	case 2:XX(); break;
	//case 3:code5(); break;
	default:printf("Error"); break;
	}
	
}