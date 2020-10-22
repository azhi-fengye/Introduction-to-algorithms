/*编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。要求用户输入表格的上下限。使用一个for循环。*/
#include<stdio.h>
long power(int y);
int main(void)
{
	int x, y;
	printf_s("请输入表格的下限：\n");
	scanf_s("%d", &x);
	printf_s("请输入表格的上限：\n");
	scanf_s("%d", &y);
	printf_s("原数\t平方\t立方\t\n");
	for (int i = x; i <=y ; i++)
	{
		printf_s("%d\t%d\t%ld\n", i, i * i, power(i));
	}
	return 0;
}
long power(int y)
{
	return y * y * y;
}