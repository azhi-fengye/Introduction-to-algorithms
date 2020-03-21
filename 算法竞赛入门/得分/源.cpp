#include<stdio.h>
#include<string.h>
#define maxn 82
char a[maxn];
int main()
{
	int t=0,sum=0;
	scanf_s("%s", a, 80);
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 'O')//如果a[i]的值等于O则++t；否则重置t的值为0；
		{
			++t;
		}
		else
		{
			t = 0;
		}
		sum += t;
	}
	printf("%d", sum);
	return	0;
}