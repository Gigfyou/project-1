#pragma once
#define _CRT_SECURE_NO_WARNINGS		//���scanf��������
#include<stdio.h>					
#include<stdlib.h>
#include<Windows.h>	
#include<math.h>					//���뺯��
//����Ԥ����	code11-20;
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
void code11(int a,int b) {
	int x[a][b];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			a[i][j] = 0;
		}
	}

}