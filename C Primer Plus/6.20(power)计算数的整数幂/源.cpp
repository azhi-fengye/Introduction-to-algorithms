#include<stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;
	printf_s("Enter a number and the positive integer power");//输入一个数字和正整数的幂
	printf_s(" to which\nthe number will be raised.Enter q");//这个数字将会被提高。进入q退出
	printf_s(" to quit.");
	while (scanf_s("%lf%d",&x,&exp)==2)
	{
		xpow = power(x, exp);
		printf_s("%.3g to the power %d is %.5g\n", x, exp, xpow);//%g:根据值的不同，自动选择%f或者%e。%e格式用于指数小于-4或者大于或等于精度时
																//%.3g的%d次方是%.5g。
		printf_s("Enter next pair of numbers or q to quit.\n");//输入下一对数字或q退出。
	}
	printf_s("Hope you enjoyed this power trip -- bye!\n");//希望你喜欢这次权力之旅——再见!
	return 0;
}
double power(double n, int p)
{
	double pow = 1;
	for (int  i = 1; i <=p; i++)
	{
		pow *= n;
	}
	return pow;
}