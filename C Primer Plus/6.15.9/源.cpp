#include<stdio.h>
int main(void)
{
	int n, m;
	n = 30;
	while (++n<=33)
	{
		printf_s("%d|", n);
	}
	n = 30;
	do
	{
		printf_s("%d|", n);
	} while (++n<=33);
	printf_s("***");
	for ( n=1; n*n < 200; n+=4)
	{
		printf_s("%d\n", n);
	}
	printf_s("\n***\n");

	for ( n = 2,m=6;n<m ;n*=2,m+=2)
	{
		printf_s("%d %d\n", n, m);
	}
	printf_s("\n***\n");
	for ( n=5; n>0; n--)
	{
		for (m = 0; m <= n; m++)
		{
			printf_s("=");
		}
		printf_s("\n");
	}
	return 0;
}