#include<stdio.h>
#define S_TO_M 60
int main(void)
{
	int sec, min, left;
	printf_s("This program converts seconds to minutes and	");
	printf_s("seconds,\n");
	printf_s("Juse enter the number of seconds.\n ");
	printf_s("Enter 0 to end the program.\n");
	scanf_s("%d", &sec);
	while (sec > 0)
	{
		min = sec / S_TO_M;
		left = sec % S_TO_M;
		printf_s("%d sec is %d min, %d sec.\n", sec, min, left);
		printf_s("Next input?\n");
	}
	printf_s("Bye!\n");
	return 0;
}