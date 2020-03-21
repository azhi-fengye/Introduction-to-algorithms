/*输入n,计算s=1!+2!+3!+...+n!的末6位*/
#include<stdio.h>
int main()
{
	const int mod = 1000000;//定义一个常量mod
	int n, sum = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int factorial = 1;
		for (int j = 1; j <= i; j++)
		{
			factorial =(factorial*j%mod);//每步都取最后6位结果不变
		}
		sum =(sum+factorial)%mod;
	}
	printf("%d", sum );
	return 0;
}