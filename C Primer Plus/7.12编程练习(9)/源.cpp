/*编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	printf_s("请输入一个正整数（仅支持输入正整数）");
	int cs;
	while (scanf_s("%d", &cs)==1&&cs>=2)
	{
		int sqrt_cs;
		for (int i = 2; i <=cs; i++)
		{
			int count = 1;
			sqrt_cs = floor(sqrt(i) + 0.5);
			for (int j = 2; j <= sqrt_cs; j++)
			{
				if (i % j == 0)
				{
					count = 0;
				}
			}
			if (count)
			{
				printf_s("%d  ", i);
			}
		}printf_s("\n");
	}
	return 0;
}