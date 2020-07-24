/*编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大10的所有整数(例如，用户输入5，
则打印5-15的所有整数，包括5和15）。要求打印的各值之间用一个空格、制表符或换行符分开。*/
#include<stdio.h>
int main(void)
{
	int input,num=13;
	printf_s("请输入一个整数，将得到该数以及比该数大10的所有整数");																														
	scanf_s("%d", &input);
	num = 11;
	while (num-- > 0)
	{
		printf_s("%c%d",32,input++);
	}
	return 0;
}