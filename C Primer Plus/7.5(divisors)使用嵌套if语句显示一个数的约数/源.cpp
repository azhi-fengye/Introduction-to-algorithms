/*�����д�������1����ʾ����������1������������*/
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	unsigned long num;//�����Ե���
	unsigned long div;//���ܵ�Լ��
	bool isPrime;//�������(������0��1)���
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