#include<stdio.h>
int main(void)
{
	const int FREEZING = 0;//freezing�����㡣
	float temperature;//temperature:�¶ȡ�
	int cold_days = 0;
	int all_days = 0;
	printf_s("Enter the list of daily low temperatures.\n");//����ÿ�յ����б�
	printf_s("Use Celsius,and enter q to quit.\n");//ʹ�������¶ȣ�����q�˳���
	while (scanf_s("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < FREEZING)
		{
			cold_days++;
		}
	}
	if (all_days != 0)
	{
		printf_s("%d days total:%.1f%% were below freezing.\n",//% d����:%��1f%%���ڱ��㡣
			all_days, 100.0 * (float)cold_days / all_days);
	}
	if (all_days==0)
	{
		printf_s("No data entered!\n");//û�����ݽ���!
	}
	return 0;
}