/*
编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数
*/
#include <stdio.h>
#include<string.h>
#define SIZE 10
int main(void)
{
	int num[SIZE];
	int	len=0;
	printf("Start:");//开始
	printf("Please enter %d integers.\n", SIZE);//请输入整数:
		while(scanf_s("%d", &num[len]) == 1)
		{
			len = len + 1;
			if (len>=SIZE)
			{
				break;
			}
		}
	printf("Here, in reverse order, are the values you entered:\n");//下面，按倒序排列，是您输入的值。
	for (int  j = len-1; j >=0; j--)
	{
		printf_s("%d", num[j]);
	}
	printf("Done! \n");

	return 0;
}
