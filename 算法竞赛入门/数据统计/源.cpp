/*输入一些整数，输出它们的最小值、最大值和平均值（保留3位小数）*/	
#include<stdio.h>
#include<stdlib.h>
#define INF 1000000000
int main()
{
	int m, n = 0, min = INF, max = -INF, sum = 0, count = 0;
	while (scanf_s("%d",&m)==1)
	{
		sum += m;
		if (m>max)
		{
			max = m;
		}
		if (m<min)
		{
			min = m;
		}
		n++;
	}
	printf("一共有%d个数 最小值是:%d 最大值是:%d 平均数是:%.3f\n",n, min, max, (double)sum / n);
	system("pause");
}