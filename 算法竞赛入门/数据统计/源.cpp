/*����һЩ������������ǵ���Сֵ�����ֵ��ƽ��ֵ������3λС����*/	
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
	printf("һ����%d���� ��Сֵ��:%d ���ֵ��:%d ƽ������:%.3f\n",n, min, max, (double)sum / n);
	system("pause");
}