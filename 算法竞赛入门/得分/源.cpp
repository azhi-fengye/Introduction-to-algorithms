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
		if (a[i] == 'O')//���a[i]��ֵ����O��++t����������t��ֵΪ0��
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