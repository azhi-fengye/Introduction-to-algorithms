#include<stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;
	printf_s("Doing it right:");//做的是正确的
	printf_s("%d minus #d is %d\n", ten, 2, ten - two);
	printf_s("Doing it wrong:");//做的是错误的
	printf_s("%d minus %d is %d\n", ten);//因为后面两个%d没有提供任何的值，所以打印出的值是内存中的任意值。
	return 0;
}