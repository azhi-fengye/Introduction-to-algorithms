/*��дһ��������ʾ�û�����������Ȼ����ת�������������������磬�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ�����
18 days are 2 weeks,4days.
ͨ��whileѭ�����û��ظ��������������û�����һ������ֵʱ����0��-20)��ѭ��������*/
#include<stdio.h>
#define A_WEEK 7
int main(void)
{
	int day, week,left;
	printf_s("����������(0���߸��ٵ��˳�!)��\n");
	scanf_s("%d", &day);
	while (day>0)
	{
		left = day % A_WEEK;
		week = day / A_WEEK;
		printf_s("%d days are %d weeks,%d days.\n", day, week, left);
		printf_s("��������(0����ٵ��˳�!):");
		scanf_s("%d", &day);
	}
	return 0;
}