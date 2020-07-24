/*修改编程练习5的程序，使其能计算整数的平方和(可以认为第一天赚$1,第二天赚$4,第三天赚$9,以此类推，这看起来很不错)。C没有平方函数，但是可以使用n*n来表示n的平方。*/
#include<stdio.h>
int main(void)
{
	int count, sum, terminus,day;
	day = 0;
	sum = 0;
	scanf_s("%d", &terminus);
	while (day++ < terminus)
	{
		count = day * day;
		sum += count;
	}
	printf_s("sum=%c%d\n", 32, sum);
	return 0;
}