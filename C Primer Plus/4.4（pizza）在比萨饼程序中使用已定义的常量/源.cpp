#include<stdio.h>
#define PI 3.14159
int main(void)
{
	float area, circum, radius;//面积，周长，半径
	printf_s("What is the radius of your pizza?\n");//你的比萨半径是多少？
	scanf_s("%f", &radius);
	area = radius * radius * PI;
	circum = 2.0 * PI * radius;
	printf_s("Your basic pizza parameters are as follows:\n");//比萨参数如下：
	printf_s("circumference=%.2f,area=%.2f\n", circum, area);//周长=%.2f,area=%.2f
	return 0;
}