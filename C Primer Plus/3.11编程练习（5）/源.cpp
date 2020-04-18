#include<stdio.h>
#define year_second 3.156e7
int main(void)
{
	int year;
	double sum;
	printf_s("Please enter your age:");//请输入您的年龄
	scanf_s("%d", &year);
	sum = year * year_second;
	printf_s("The number of seconds of your age is:%f",sum);//您年龄的秒数为
	return 0;
}