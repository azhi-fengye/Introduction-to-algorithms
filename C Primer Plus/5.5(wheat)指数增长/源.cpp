#include<stdio.h>
#define SQUARES 64
int main(void)
{
	const double CROP = 2E16;
	double current, total;
	int count = 1;
	printf_s("square     garins       total      ");
	printf_s("fraction of \n");
	printf_s("           added        grains     ");
	printf_s("world total\n");
	total = current = 1.0;
	printf_s("%4d %13.2e %12.2e %12.2e\n", count, current,
		total, total / CROP);
	while (count<SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;
		total = total + current;
		printf_s("%4d %13.2e %12.2e %12.2e\n", count, current,
			total, total / CROP);
	}
	printf_s("That's all.\n");
	return 0;
}