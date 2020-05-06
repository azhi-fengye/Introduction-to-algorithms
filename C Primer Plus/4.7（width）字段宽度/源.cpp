#include<stdio.h>
#define PAGES 959
int main(void)
{
	printf_s("*%d*\n", PAGES);
	printf_s("*%2d*\n", PAGES);
	printf_s("*%10d*\n", PAGES);
	printf_s("*%-10d*\n", PAGES);
	return 0;
}