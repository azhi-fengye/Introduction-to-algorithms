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
	while (scanf_s("%d%d%d",&n,&k,&m)==3&&n)//����n���ˣ���ԱA�ߵĲ���k����ԱB�ߵĲ���m
	{
		for (int i = 1; i <=n; i++)
		{
			a[i] = i;//��һ����a[i]��ֵ
		}
		int p1 = n,p2 = 1;
		int left = n;
		while (left)
		{
			p1 = go(p1, 1, k);
			p2 = go(p2, -1, m);
			printf("%3d", p1); left--;
			if (p2!=p1)//���������Առ�Ĳ���ͬһ�������������ԱBռ���ˣ�Ȼ�������ټ�һ��
			{
				printf("%3d", p2);
				left--;
			}
			a[p1] = a[p2] = 0;//�ٽ�������λ�ñ��0����Ϊ���Զ��庯��go�У�0��λ�û���������ζ��������뿪�˶��鲻�ټ���
			if (left)
			{
				printf(",");
			}
			printf("\n");
		}
	}
	return 0;
}