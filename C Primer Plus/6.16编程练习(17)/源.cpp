/*Chuckie LuckyӮ����100����Ԫ(˰��),���ѽ������������8%���˻�����ÿ������һ�죬Chuckieȡ��10����Ԫ��
��дһ�����򣬼���������Chuckie��ȡ���˻���Ǯ*/
#include<stdio.h>
int main(void)
{
	double	sum = 100;
	int count = 0;
	do
	{
		sum += sum * 0.08;
		sum -= 10;
		count++;
	} while (sum > 0);
	printf_s("������%d��Ϳ���ȡ��", count);
	return 0;
}