#include<stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;
	rv = printf_s("%d F is water's boiling point.\n", bph2o);//%d F是水的沸点
	printf_s("The printf() function printed %d characters.\n", rv);//函数的作用是:打印%d个字符。
	return 0;
}