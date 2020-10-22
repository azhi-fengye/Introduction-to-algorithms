/*编写一个程序，要求用户输入一个上限整数和一个下限整数面积算从上限到下限范围内所有整数的平方和，并显示计算结果。
然后程序继续提示用户输入上限和下限整数，并显示结果，直到用户输入的上限整数等于或小于下限整数为止。
Enter lower and upper integer limits:5 9
The sums od the squares from 25 to 81 is 255
Enter next set of limits:3 25
The sums of the squares from 9 to 625 is 5520
Enter next set of limits:5 5
Done*/
#include<stdio.h>
int square(int x);
int main(void)
{
	int x, y;
	int lower, upper;
	printf_s("Enter lower and upper integer limits:");//输入整数的上限和下限
	while (scanf_s("%d%d", &x, &y) == 2)
	{
		long sum = 0;
		if (x < y)
		{
			lower = x;
			upper = y;
			for (int i = lower; i <= upper; i++)
			{
				sum += square(i);
			}
			printf("The sums of the squares from %d to %d is %d\n", square(lower), square(upper), sum);
			printf_s("Enter next set of limits:");
		}
		else if (y < x)
		{
			lower = y;
			upper = x;
			for (int i = lower; i <= upper; i++)
			{
				sum += square(i);
			}
			printf("The sums of the squares from %d to %d is %d\n", square(lower), square(upper), sum);
			printf_s("Enter next set of limits:");
		}
		else
		{
			printf_s("Done");
			break;
		}
	}
	return 0;
}
int square(int x)
{
	return x * x;
}