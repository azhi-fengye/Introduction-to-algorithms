#include<stdio.h>
#define maxn 1005
int a[maxn];
int main()
{
	int n, m;
	scanf_s("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (i % j == 0)
			{
				a[i] = !a[i];
			}
		}
	}
		for (int y = 1; y <= n; y++)
		{
			if (a[y])
			{
				printf("%d  ", y);
			}
		}
	return 0;
}