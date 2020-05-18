#include<stdio.h>
int main(void)
{
	unsigned width, precision;//宽度，精度
	int number = 256;//数字
	double weight = 242.5;//重量
	printf_s("Enter a field width:\n");//输入字段宽度
	scanf_s("%d", &width);
	printf_s("The number is :%*d\n", width, number);//数字是
	printf_s("Now enter a width and a precision:\n");//现在输入宽度和精度
	scanf_s("%d %d", &width, &precision);
	printf_s("Weight = %*.*f\n", width, precision, weight);
	printf_s("Done!\n");// 完成!
	return 0;
}