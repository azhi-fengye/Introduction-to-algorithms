#include<stdio.h>
#define PI 3.14159
int main(void)
{
	float area, circum, radius;//������ܳ����뾶
	printf_s("What is the radius of your pizza?\n");//��ı����뾶�Ƕ��٣�
	scanf_s("%f", &radius);
	area = radius * radius * PI;
	circum = 2.0 * PI * radius;
	printf_s("Your basic pizza parameters are as follows:\n");//�����������£�
	printf_s("circumference=%.2f,area=%.2f\n", circum, area);//�ܳ�=%.2f,area=%.2f
	return 0;
}