/*编写一个程序，提示用户输入一个double的值，并打印该数的立方值。自己设计一个函数计算并打印立方值。main()函数要把用户输入的值传递给该函数。*/
#include<stdio.h>
double cude(double n);
int main(void)
{
	double input;
	printf_s("Enter a floating-point value:\n");
	scanf_s("%lf", &input);
	printf_s("The cube of this number is：%lf",cude(input));
}
double cude(double n)
{
	return n*n*n;
}