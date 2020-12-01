#include<stdio.h>
int main(void)
{
	const int FREEZING = 0;//freezing：冰点。
	float temperature;//temperature:温度。
	int cold_days = 0;
	int all_days = 0;
	printf_s("Enter the list of daily low temperatures.\n");//输入每日低温列表。
	printf_s("Use Celsius,and enter q to quit.\n");//使用摄氏温度，输入q退出。
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
		printf_s("%d days total:%.1f%% were below freezing.\n",//% d天总:%。1f%%低于冰点。
			all_days, 100.0 * (float)cold_days / all_days);
	}
	if (all_days==0)
	{
		printf_s("No data entered!\n");//没有数据进入!
	}
	return 0;
}