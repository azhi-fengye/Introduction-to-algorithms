#include<stdio.h>
int main(void)
{
	int n;
	printf_s("Please enter three integers:\n");//请输入三个整数:
	scanf_s("%*d %*d %d", &n);
	printf_s("The last integer was:%d\n", n);//最后一个整数是:
	return 0;
}