#include<stdio.h>
int main(void)
{
	printf_s("%x %X %#x %#X\n", 31, 31, 31, 31);
	printf_s("**%d**% d**%  d**\n", 42, 42, -42);
	printf_s("**%5d**%5.3d**%05d**%5.03d**\n", 6, 6, 6, 6);
	return 0;
}