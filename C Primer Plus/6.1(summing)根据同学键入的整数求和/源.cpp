/*根据用户输入的整数求和*/
#include<stdio.h>
int main(void)
{
	long num;
	long sum = 0L;//把sum初始化为0;
	printf_s("Please enter an integer to be summed ");//请输入一个要求和的整数
	printf_s("(q to quit): ");//q退出
	while (scanf_s("%ld", &num)==1)
	{
		sum = sum + num;
		printf_s("Please enter next ineger (q to quit): ");//请输入新的整数（q退出）
	}
	printf_s("Those integers sum to %ld.\n", sum);//这些整数的和是
	return 0;
}