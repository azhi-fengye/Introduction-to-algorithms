/*�޸���ϰ7�ļ���a���ó�����Ը���һ����ѡ��Ĺ��ʵȼ��˵���ʹ��switch��ɹ��ʵȼ�ѡ��
���г������ʾ�Ĳ˵�Ӧ������������
******************************************************************
Eenter the number corresponding to the desired pay rate or action:
(������������֧���ʻ�������Ӧ������)
1)$8.75/hr                           2)$9.33/hr
3)$10.00/hr                          4)$11.20/hr
5)quit
******************************************************************
���ѡ��1~4���е�һ�����֣�����Ӧ��ѯ���û�������Сʱ��������Ҫͨ��ѭ�����У������û�����5��
�������1~5��������֣�����Ӧ�����û�������ȷ��ѡ�Ȼ�����ظ���ʾ�˵���ʾ�û����롣
ʹ��#define�������ų�����ʾ�����ʵȼ���˰�ʡ�*/
#include<stdio.h>
#include<stdbool.h>
#define PAY_RATE1 8.75
#define PAY_RATE2 9.33
#define PAY_RATE3 10.00
#define PAY_RATE4 11.20
#define TIME_BASE 40
#define OVERTIME_PAY 1.5
#define BREAK1 300
#define BREAK2 450
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
int main(void)
{
	int heure, option;
	double wage, tax, PAY_RATE = 0;
	bool iswhile_out = false;
	printf_s("******************************************************************\n");
	printf_s("Eenter the number corresponding to the desired pay rate or action:\n");
	printf_s("(������������֧���ʻ�������Ӧ������)\n");
	printf_s("1)$8.75 / hr                           2)$9.33 / hr\n");
	printf_s("3)$10.00 / hr                          4)$11.20 / hr\n");
	printf_s("5��quit\n");
	printf_s("******************************************************************\n");
	while ((scanf_s("%d", &option) == 1))
	{
		iswhile_out = true;
		switch (option)
		{
		case 1:PAY_RATE = PAY_RATE1;
			printf_s("��ǰ���Ĺ��ʵ�λΪ��%.2f", PAY_RATE);
			break;
		case 2:PAY_RATE = PAY_RATE2;
			printf_s("��ǰ���Ĺ��ʵ�λΪ��%.2f", PAY_RATE);
			break;
		case 3:PAY_RATE = PAY_RATE3;
			printf_s("��ǰ���Ĺ��ʵ�λΪ��%.2f", PAY_RATE);
			break;
		case 4:PAY_RATE = PAY_RATE4;
			printf_s("��ǰ���Ĺ��ʵ�λΪ��%.2f", PAY_RATE);
			break;
		case 5:
			break;
		default:
			printf_s("����������������������");
			printf_s("******************************************************************\n");
			printf_s("Eenter the number corresponding to the desired pay rate or action:\n");
			printf_s("(������������֧���ʻ�������Ӧ������)\n");
			printf_s("1)$8.75/hr                           2)$9.33/hr\n");
			printf_s("3)$10.00/hr                          4)$11.20/hr\n");
			printf_s("5��quit\n");
			printf_s("******************************************************************\n");
			iswhile_out = false;
			break;
		}
		if (iswhile_out)
		{
			break;
		}
	}
	printf_s("��������һ�ܹ�����Сʱ��:");
	scanf_s("%d", &heure);
	if (heure > TIME_BASE)
	{
		wage = ((TIME_BASE * PAY_RATE)) + ((double)heure - TIME_BASE) * PAY_RATE * OVERTIME_PAY;
	}
	else
	{
		wage = heure * PAY_RATE;
	}
	if (wage <= 300)
	{
		tax = wage * RATE1;
	}
	else if (wage <= 450)
	{
		tax = (300 * RATE1) + (wage - 300) * RATE2;
	}
	else if (wage > 450);
	{
		tax = (300 * RATE1) + (150 * RATE2) + (wage - 450) * RATE3;
	}
	printf_s("******************************************************************\n");
	printf_s("\t\tСʱ��\t\t�ܹ���\t\t˰��\t\t������\t\n");
	printf_s("һ�ܹ���\t%d\t\t%.3f\t\t%.3f\t\t%.3f", heure, wage, tax, wage - tax);
	return 0;
}