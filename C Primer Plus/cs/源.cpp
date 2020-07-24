#include<stdio.h>
#define FORMAT "%s! C is cool!\n"
int main(void)
{
	int num = 10;
	printf_s(FORMAT, FORMAT);
	printf_s("%d\n", ++num);
	printf_s("%d\n", num++);
	printf_s("%d\n", num--);
	printf_s("%d\n", num);
	return 0;
}