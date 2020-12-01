/*程序有错误，输入1会显示素数，但是1并不是素数。*/
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	unsigned long num;//待测试的数
	unsigned long div;//可能的约数
	bool isPrime;//素数标记(可以用0或1)替代
	printf_s("Please enter an integer for analysis;");
	printf_s("Enter q to quit.\n");
	while (scanf_s("%lu", &num) == 1)
	{
		for (div = 2, isPrime = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
				{
					printf_s("%lu is divisible by %lu and %lu.\n", num, div, num / div);
				}
				else
				{
					printf_s("%lu is divisible by %lu.\n", num, div);

				}
				isPrime = false;
			}
		}
		if (isPrime)
		{
			printf_s("%lu is prime.\n", num);
		}
		printf_s("Please enter another integer for analysis;");
		printf_s("Enter q to quit.\n");
	}
	printf_s("Bye.\n");
	return 0;
}