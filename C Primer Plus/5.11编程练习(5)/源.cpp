/*�޸ĳ���addemup.c(�����嵥5.13��,�������Ϊaddemup.c�Ǽ���20����׬����Ǯ�ĳ��򣨼����1��׬$1,�ڶ���׬$2,������׬$3,�Դ�����)��
�޸ĳ���ʹ��������û������������û�����������м���(�����ö����һ����������20����*/
#include<stdio.h>
int main(void)
{
	int count, sum, terminus;
	count = 0;
	sum = 0;
	scanf_s("%d", &terminus);
	while (count++ < terminus)
	{
		sum += count;
	}
	printf_s("sum=%c%d\n", 32, sum);
	return 0;
}