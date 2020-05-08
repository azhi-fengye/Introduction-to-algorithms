#include<stdio.h>
int main(void)
{
	printf_s("Here's one way to print a");
	printf_s("long string.\n");
	printf_s("Here's another way to print a \
long string.\n");
	printf("Here's the newest way to print a "
		"long string.\n");/*ANSI C*/
	return 0;
}