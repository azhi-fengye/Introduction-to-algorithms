#include<stdio.h>
#define maxn 20
int a[maxn][maxn];
int main()
{
	int n, x, y, tot;
	scanf_s("%d", &n);
	tot = a[x = 0][y = 0] = 1;
	while (tot < n * n)
	{
		while (x + 1 < n && a[x+1][y] == 0)
		{
			a[++x][y] = ++tot;
		}
		while (y + 1 < n && a[x][y+1]==0)
		{
			a[x][++y] = ++tot;
		}
		while (x-1>=0&&a[x-1][y]==0)
		{
			a[--x][y] = ++tot;
		}
		while (y-1>=0&&a[x][y-1]==0)
		{
			a[x][--y] = ++tot;
		}
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}