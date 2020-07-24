/*编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例如，用户输入18，则转换成2周4天。以下面的格式显示结果。
18 days are 2 weeks,4days.
通过while循环让用户重复输入天数，当用户输入一个非正值时（如0或-20)，循环结束。*/
#include<stdio.h>
#define A_WEEK 7
int main(void)
{
	int day, week,left;
	printf_s("请输入天数(0或者更少的退出!)：\n");
	scanf_s("%d", &day);
	while (day>0)
	{
		left = day % A_WEEK;
		week = day / A_WEEK;
		printf_s("%d days are %d weeks,%d days.\n", day, week, left);
		printf_s("输入天数(0或更少的退出!):");
		scanf_s("%d", &day);
	}
	return 0;
}