/*Daphne以10%的单利息投资了100美元(也就是说，每年投资获利相当于原始投资的10%)。
Deirdre以5%的复合利息投资了100美元（也就是说，利息是当前余额的5%，包含之前的利息）。
编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne，并显示那时两人的投资额。*/
#include<stdio.h>
int main(void)
{
	double sum1 = 100, sum2 = 100;
	int	count=0;
	do
	{
		count++;
		sum1 += 100 * 0.1;
		sum2 += sum2 * 0.05;
	} while (sum1>=sum2);
	printf_s("Deirdre的投资额会在第%d年超过Daphne的投资额，\n此时Deirdre的投资额为%f,Daphne的投资额为%f",count,sum2, sum1);
	return 0;
}