/*�޸ı����ϰ5�ĳ���ʹ���ܼ���������ƽ����(������Ϊ��һ��׬$1,�ڶ���׬$4,������׬$9,�Դ����ƣ��⿴�����ܲ���)��Cû��ƽ�����������ǿ���ʹ��n*n����ʾn��ƽ����*/
#include<stdio.h>
int main(void)
{
	int count, sum, terminus,day;
	day = 0;
	sum = 0;
	scanf_s("%d", &terminus);
	while (day++ < terminus)
	{
		count = day * day;
		sum += count;
	}
	printf_s("sum=%c%d\n", 32, sum);
	return 0;
}