/*��дһ��������ʾ�û�����һ�ܹ�����Сʱ����Ȼ���ӡ�����ܶ˰��;����롣�������¼��裺
a,��������=10.00��Ԫ/Сʱ
b.�Ӱࣨ����40Сʱ��=1.5����ʱ��
c.˰�ʣ�ǰ300��ԪΪ15%
		��150��ԪΪ20%
		���µ�Ϊ25%
��#define������ų��������������Ƿ���ϵ�ǰ��˰��*/

#include<stdio.h>
#define BASE_WAGE 10
#define OVERTIME_WAGE 15
#define THE_FIRST_300 0.15
#define CONTINUE_TO_150 0.2
#define THE_REST_OF 0.25
int main(void) 
{
	float heure;//Сʱ����
	float wage;//���ʡ�
	float tax;//˰�ա�
	printf_s("��������������Сʱ��:");
	scanf_s("%f", &heure);
	while (heure<0)
	{
		printf_s("���������������������룺");
		scanf_s("%f", &heure);
	}
	if (heure<=40)
	{
		wage = heure * BASE_WAGE;
	}
	else
	{
		wage = 40 * BASE_WAGE + (heure - 40) * OVERTIME_WAGE;
	}
	if (wage <= 300)
	{
		tax = wage * THE_FIRST_300;
	}
	else if (wage<=450)
	{
		tax = 300 * THE_FIRST_300+((double)wage-300) * CONTINUE_TO_150;
	}
	else
	{
		tax = 330 * THE_FIRST_300 + CONTINUE_TO_150 * 150 + ((double)wage - 450) * THE_REST_OF;
	}
	printf_s("��һ�ܹ�����Сʱ��Ϊ��%.3f,�����ܶ�Ϊ%.3f,˰��Ϊ%.3f,������Ϊ%.3f,",heure,wage,tax,(double)wage-tax);
	return 0;
}