#include<stdio.h>
int main(void)
{
	float salary;
	printf_s("\aEnter your desired monthly salary:");
	printf_s(" $_______\b\b\b\b\b\b\b");
	scanf_s("%f", &salary);
	printf_s("\n\t$%.2f a moth is$%.2f a year", salary, salary * 12.0);
	printf_s("\rGee!\n");
	getchar();
	getchar();
	return 0;
}