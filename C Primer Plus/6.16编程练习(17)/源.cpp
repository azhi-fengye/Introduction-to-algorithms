/*Chuckie Lucky赢得了100万美元(税后),他把奖金存入年利率8%的账户。在每年的最后一天，Chuckie取出10万美元。
编写一个程序，计算多少年后Chuckie会取完账户的钱*/
#include<stdio.h>
int main(void)
{
	double	sum = 100;
	int count = 0;
	do
	{
		sum += sum * 0.08;
		sum -= 10;
		count++;
	} while (sum > 0);
	printf_s("经过第%d年就可以取完", count);
	return 0;
}