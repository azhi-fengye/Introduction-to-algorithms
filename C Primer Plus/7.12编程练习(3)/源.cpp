/*编写一个程序，读取整数直到用户输入0。输入结束后，程序应报告用户输入的偶数（不包括0）个数、
这些偶数的平均值、输入的奇数个数及其奇数的平均值。*/
#include<stdio.h>
int main(void)
{
	int number;
	int even_number=0;//偶数
	int odd_number=0;//奇数
	int even_sum=0;//偶数和
	int odd_sum=0;//奇数和
	while (scanf_s("%d",&number)&&number!=0)
	{
		if (number % 2 == 0)
		{
			even_number++;
			even_sum += number;
		}
		else
		{
			odd_number++;
			odd_sum += number;
		}
	}
	if (even_number>0)
	{
		printf_s("您输入的偶数个数为:%d、这些偶数的平均值为:%.3f、", even_number, (float)even_sum / even_number);
	}
	else
	{
		printf_s("您输入的偶数个数为:0、这些偶数的平均值为:0、");
	}
	if (odd_number>0)
	{
		printf_s("您输入的奇数个数为:%d、这些奇数的平均值为:%.3f。", odd_number, (float)odd_sum / odd_number);
	}
	else
	{
		printf_s("您输入的奇数个数为:0、这些奇数的平均值为:0。");
	}
	return 0;
}