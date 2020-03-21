/*输入一组整数，从小到大排列后输出*/
#include<stdio.h>
#include<stdlib.h>
#define maxn 22
int a[maxn];
int main()
{
	int temp,x,n=0;
	while (scanf_s("%d",&x)==1)//输入一个数成功读入的话返回值为1执行while语句里的语句。
	{
		a[n++] = x;//可写成a[n]=x;n++;如果是++n则先加一再读入。
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