/*读入一些整数，逆序输出到一行中（整数不超过100个）*/
#include<stdio.h>
#define maxn 105
int a[maxn];
int main()
{
	int x, n = 0;
	while (scanf_s("%d",&x)==1)
	{
		a[n++] = x;
	}
	for (int i = n-1; i >=0; i--)
	{
		printf("%d ", a[i]);
	}
	return 0;
}