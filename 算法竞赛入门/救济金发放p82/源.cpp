#include<stdio.h>
#define maxn 25
int n, k, m, a[maxn];
int go(int p,int d,int t)
{
	while (t--)
	{
		do { p = (p + d + n - 1) % n + 1; } while (a[p] == 0);
	}
	return p;
}
int main()
{ 
	while (scanf_s("%d%d%d",&n,&k,&m)==3&&n)//输入n个人，官员A走的步数k，官员B走的步数m
	{
		for (int i = 1; i <=n; i++)
		{
			a[i] = i;//这一步给a[i]赋值
		}
		int p1 = n,p2 = 1;
		int left = n;
		while (left)
		{
			p1 = go(p1, 1, k);
			p2 = go(p2, -1, m);
			printf("%3d", p1); left--;
			if (p2!=p1)//如果两个官员占的不是同一个人则再输出官员B占的人，然后总数再减一。
			{
				printf("%3d", p2);
				left--;
			}
			a[p1] = a[p2] = 0;//再将这两个位置变成0，因为在自定义函数go中，0的位置会跳过，意味着这个人离开了队伍不再计算
			if (left)
			{
				printf(",");
			}
			printf("\n");
		}
	}
	return 0;
}