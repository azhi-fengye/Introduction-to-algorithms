#include<stdio.h>
#define year_second 3.156e7
int main(void)
{
	int year;
	double sum;
	printf_s("Please enter your age:");//��������������
	scanf_s("%d", &year);
	sum = year * year_second;
	printf_s("The number of seconds of your age is:%f",sum);//�����������Ϊ
	return 0;
}