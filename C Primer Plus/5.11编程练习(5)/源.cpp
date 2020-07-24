/*修改程序addemup.c(程序清单5.13）,你可以认为addemup.c是计算20天里赚多少钱的程序（假设第1天赚$1,第二天赚$2,第三天赚$3,以此类推)。
修改程序，使其可以与用户交互，根据用户输入的数进行计算(即，用读入的一个数来代替20）。*/
#include<stdio.h>
int main(void)
{
	int count, sum, terminus;
	count = 0;
	sum = 0;
	scanf_s("%d", &terminus);
	while (count++ < terminus)
	{
		sum += count;
	}
	printf_s("sum=%c%d\n", 32, sum);
	return 0;
}