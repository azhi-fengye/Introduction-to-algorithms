/*����n,����s=1!+2!+3!+...+n!��ĩ6λ*/
#include<stdio.h>
int main()
{
	const int mod = 1000000;//����һ������mod
	int n, sum = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int factorial = 1;
		for (int j = 1; j <= i; j++)
		{
			factorial =(factorial*j%mod);//ÿ����ȡ���6λ�������
		}
		sum =(sum+factorial)%mod;
	}
	printf("%d", sum );
	return 0;
}