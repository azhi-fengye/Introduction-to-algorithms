#include<stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	printf_s("%f can be written %e\n", aboat, aboat);
	//��һ��Ҫ�������֧��C99�����е��������
	printf_s("And it's %a in hexadecimal,powers od 2 notation\n", aboat);
	printf_s("%f can be written %e\n", abet, abet);
	printf_s("%Lf can be written %Le\n", dip, dip);
	return 0;
}