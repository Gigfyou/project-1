#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
//using namespace std;
////**********************����ȡ���㷨����
//const int MAXN = 85, Mod = 10000;
//int n, m;
//int ar[MAXN];
//struct HP
//{
//	int p[505], len;
//	HP() {
//		memset(p, 0, sizeof p);
//		len = 0;
//	}//���캯��������ֱ�Ӵ���һ���߾��ȱ���
//	void print() {
//		printf("%d", p[len]);
//		for (int i = len - 1; i > 0; i--) {
//			if (p[i] == 0) {
//				printf("0000");
//				continue;
//			}
//			for (int k = 10; k * p[i] < Mod; k *= 10) {
//				printf("0");
//			}
//			printf("%d", p[i]);
//		}
//	}//��λѹ�������
//
//}f[MAXN][MAXN], base[MAXN], ans;
//HP operator +(const HP& a, const HP& b) {
//	HP c; c.len = max(a.len, b.len); int x = 0;
//	for (int i = 1; i <= c.len; i++) {
//		c.p[i] = a.p[i] + b.p[i] + x;
//		x = c.p[i] /Mod;
//		c.p[i] %= Mod;
//	}
//	if (x > 0) {
//		c.p[++c.len] = x;
//	}
//	return c;
//}//�߾���+�߾���
//HP max(const HP& a, const HP& b) {
//	if (a.len > b.len) {
//		return a;
//	}
//	else if (a.len < b.len) {
//		return b;
//	}
//	return a;
//}//�Ƚ�ȡ���ֵ
//void BaseTwo() {
//	base[0].p[1], base[0].len = 1;
//	for (int i = 1; i < m + 2; i++) {
//		base[i] = base[i - 1]*2;
//	}
//}//Ԥ�����2����
//int code3(void) {
//		scanf("%d%d", &n, &m);
//		BaseTwo();
//		while (n--) {
//			memset(f, 0, sizeof f);
//			for (int i = 1; i <= m; i++)
//				scanf("%d", &ar[i]);
//			for (int i = 1; i <= m; i++)
//				for (int j = m; j >= i; j--) { //��Ϊ��ֵ��С���䣬DP��Ȼ�ʹӴ����俪ʼ 
//					f[i][j] = max(f[i][j], f[i - 1][j] + base[m - j + i - 1] * ar[i - 1]);
//					f[i][j] = max(f[i][j], f[i][j + 1] + base[m - j + i - 1] * ar[j + 1]);
//				} //�ýṹ�����������д�����Ƚ���Ȼ 
//			HP Max;
//			for (int i = 1; i <= m; i++)
//				Max = max(Max, f[i][i] + base[m] * ar[i]);
//			ans = ans + Max; //��¼���ܴ��� 
//		}
//		ans.print(); //��� 
//		return 0;
//	}
////**********************
//void code1();
//void code2();
//void code1(){
//	int a[10], b, i;
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		if (a[i] > a[i + 1]) {
//			
//		}
//	}
//}
//void code2(){
//	int a, b;
//	cout << "��������ֵ��";
//	cin >> a >> b;
//	/*printf("a=%d,b=%d", a, b);*/
//	cout << "a=" << a << "," << "b=" << b << endl;
//}
//void code9() {
//	int a, b, c, d;
//}
#include <objbase.h>
#include <stdio.h>
//--����GUID
const char* newGUID()
{
	static char buf[64] = { 0 };
	GUID guid;
	if (S_OK == ::CoCreateGuid(&guid))
	{
		_snprintf(buf, sizeof(buf)
			, "{%08X-%04X-%04x-%02X%02X-%02X%02X%02X%02X%02X%02X}"
			, guid.Data1
			, guid.Data2
			, guid.Data3
			, guid.Data4[0], guid.Data4[1]
			, guid.Data4[2], guid.Data4[3], guid.Data4[4], guid.Data4[5]
			, guid.Data4[6], guid.Data4[7]
		);
	}
	return (const char*)buf;
}
int code14()
{
	//--COM
	CoInitialize(NULL);
	printf(newGUID());
	printf("\n");
	//--COM
	CoUninitialize();
	return 0;
}
//����ȡ���㷨
//
int main() {
	code14();
}