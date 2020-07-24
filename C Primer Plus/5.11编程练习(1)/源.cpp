/*编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。
使用#define或者const创建一个表示60的符号常量或const变量。通过while循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环*/
#include<stdio.h>
#define M_TO_H 60
int main(void)
{
	int min, hour,left;
	printf_s("请输入分钟数(0或负数终止循环)：\n");
	scanf_s("%d", &min);
	while (min > 0)
	{
		hour = min / M_TO_H;
		left = min % M_TO_H;
		printf_s("Now time:%d:%d\n", hour, left);
		printf_s("再一次输入分钟数(0或负数终止循环)：");
		scanf_s("%d", &min);
	}
	return 0;
}