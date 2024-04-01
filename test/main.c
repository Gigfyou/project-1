#include<stdio.h>
#include<stdlib.h>
#include<windows.h>  
#include<math.h>
//#include <rpc.h>  
#define _CRT_SECURE_NO_WARNINGS		//解决scanf在报错问题
//该源码为程序测试代码 code1-20;
//函数预定义	code1-20;
void code1();						//code1
void code2();						//code2
void code3();						
void code4();						
void code5();						
void code6();						
void code7();						
void code8();						
void code9();						
//void code10();						
//void code11();						
//void code12();						
//void code13();						
//void code14();						
//void code15();						
//void code16();						
//void code17();						
//void code18();						
//void code19();						
//void code20();						
//

void code1() {
	double s = 0.0;
	int n = 1, i = 0,t=0;
	for (i = 1; i <= 500; i++) {
		t = 1.0 * i * ((2 * i) - 1);
		s += 1.0 / t;
	}
	printf("%lf", s);
}

void code2() {
	int a = 12;//  >>除以2的几次方,<<乘2的几次方
	a = a << 2;
	printf("%d", a);
}

void code4() {
	int a = 18, b = 4, c;
	c = a / b / 2; 
	printf("%d", c);
}

int fun(int a, int b)
{
	int c;
	a = a + 2; b = a + b; c = a + b;
	return c;
}
void code3()
{
	int x = 2, y = 3, z;
	z = fun(x, y);
	printf("%d,%d,%d\n", x, y, z);
}
void code5() {
#define N 5
#define M 6
	int a[6][3],n=1,a1=6,a2=3;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j]=n;
			n++;
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}
void code6() {
	int x = 011;
	printf("%d\n", ++x);
}
//冒泡法排序
void code7() {
	int a[10], b, i, j;
	for (i = 0; i < 10; i++) {
		printf("输入a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	for (i = 1; i <10; i++) {
		for (j = 9; j >=i; j--) {
			if (a[j] < a[j - 1]) {
				b = a[j - 1];
				a[j - 1] = a[j];
				a[j] = b;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d\t", a[i]);
		if (i == 4)printf("\n");
	}
	printf("\n");
}
//选择法排序
void code8() {
	int a[10], b, i, j;
	for (i = 0; i < 10; i++) {
		printf("输入a[%d]=", i + 1);
		scanf_s("%d", &a[i]);
	}

}
//实验代码
void code9() {
	int a[5][9], i, j,b=0,c=0;
	int* p = a;
	for (i = 0; i < 5; i++) {
		for ( j = 0; j < 9; j++) {
			a[i][j] = b;
			b++;
			if (b == 9) {
				b = 0;
			}
		}
	}
	for (i = 0; i <= 4; i++) {
		a[i][0] = c;
		c++;
	}
	for (i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {
			printf("(%d,%d)\t", 0,a[i][j]);
		}
		printf("\n");
	}
}
void code10() {
	//心
	int a, b, c;
	for (int i = 0; i < 10; i++) {
		if (i < 5)printf(" ");
		else printf("*");
	}
}
//矩阵取数问题
void code11() {
	int a[10] = { 1, 3, 5, 7, 9, 2, 4, 6,7};
	int* b = a;
	while (*b!='\0') {
		printf("%d ", *b);  // 使用 *b 来获取指针 b 指向的值  
		b++;
	}

}


//const char* newGUID() {
//	static char buf[64]; // 静态缓冲区，用于存储GUID字符串  
//	UUID uuid;           // UUID结构，用于存储GUID  
//
//	// 生成新的GUID  
//	if (UuidCreate(&uuid) == RPC_S_OK) {
//		// 将GUID格式化为字符串  
//		sprintf_s(buf, sizeof(buf),
//			"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
//			uuid.Data1,
//			uuid.Data2,
//			uuid.Data3,
//			uuid.Data4[0], uuid.Data4[1],
//			uuid.Data4[2], uuid.Data4[3],
//			uuid.Data4[4], uuid.Data4[5],
//			uuid.Data4[6], uuid.Data4[7]);
//	}
//	else {
//		// 如果GUID生成失败，设置一个默认字符串  
//		strcpy_s(buf, sizeof(buf), "GUID_GENERATION_FAILED"); // 使用strcpy_s并指定缓冲区大小
//	}
//
//	return buf; // 返回GUID字符串  
//}

//int code12() {
//	// 测试函数  
//	const char* guid = newGUID();
//	printf("Generated GUID: %s\n", guid);
//	return 0;
//}
void code13() {
	//n!=1*2*3*4*n
	int n=3, i,s=1;
	for (i = 1; i <= n; i++) {
		s *= i;
	}
	printf("%d", s);
}
void code14() {
	//log(a)n=x  -> a(x)=n ->
	int a, n, x;
	double s;
	s = log2(100);//log(10)100=2--10*10=100
	printf("%lf", s);//2
	//switch (x){
	//	case 1:;
	//	case 2:;
	//	default:;
	//}

}
int main() {
	code14();
	return 0;
}