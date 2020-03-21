#include<stdio.h>
#define maxn 100005
int a[maxn];
int main()
{
	int  n;
	for (int i = 1; i < maxn; i++)
	{
		int x = i, y = i;
		while (x > 0)
		{
			y += x % 10; x /=10;
		}
		if (a[y]==0||i<a[y])
		{
			a[y] = i;
		}
	}
		scanf_s("%d", &n);
		printf("%d\n", a[n]);
	return 0;
}