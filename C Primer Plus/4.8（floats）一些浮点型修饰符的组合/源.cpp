#include<stdio.h>
int main(void)
{
	const double RENT = 3852.99;//const£º³£Á¿
	printf_s("*%f*\n", RENT);
	printf_s("*%e*\n", RENT);
	printf_s("*%4.2f*\n", RENT);
	printf_s("*%3.1f*\n", RENT);
	printf_s("*%10.3f*\n", RENT);
	printf_s("*%10.3f*\n", RENT);
	printf_s("*%+4.2f*\n", RENT);
	printf_s("*%010.2f*\n", RENT);
	return 0;
}