/*����һ����������С�������к����*/
#include<stdio.h>
#include<stdlib.h>
#define maxn 22
int a[maxn];
int main()
{
	int temp,x,n=0;
	while (scanf_s("%d",&x)==1)//����һ�����ɹ�����Ļ�����ֵΪ1ִ��while��������䡣
	{
		a[n++] = x;//��д��a[n]=x;n++;�����++n���ȼ�һ�ٶ��롣
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}