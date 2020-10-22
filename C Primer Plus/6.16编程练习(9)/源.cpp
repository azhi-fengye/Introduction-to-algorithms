/*编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。
在用户输入非数字之前，程序应循环处理用户输入的每对值。使用一个函数返回计算的结果*/
#include<stdio.h>
double func1(double n, double m);
int main(void)
{
	double n, m;
	printf_s("请输入两个浮点数，程序会打印两数之差除以两数成绩的结果:");
	while (scanf_s("%lf%lf", &n, &m) == 2)
	{
		printf_s("(%.3lf-%.3lf)/(%.3lf*%.3lf)=%.3lf\n", n, m, n, m, func1(n, m));
		printf_s("请继续输入两个新的浮点数，程序会打印两数之差除以两数乘积的结果:");
	}
}
double func1(double n, double m)
{
	return (n - m) / (n * m);
}
