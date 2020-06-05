#include<stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;//³£Á¿
	double shoe, foot;
	printf_s("show size (men's) foot length\n");
	shoe = 3.0;
	while (shoe<18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf_s("%10.1f %15.2f inches\n", shoe, foot);
		shoe += 1.0;
	}
	printf_s("if the shoe fits,wear it.\n");
	return 0;
}