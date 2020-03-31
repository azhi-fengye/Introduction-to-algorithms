#include<stdio.h>
int main(void)
{
	int year = 20;
	int year_day = 365;
	int my_day;
	my_day = year * year_day;
	printf_s("我年龄的天数为%d",my_day);
	return 0;
}