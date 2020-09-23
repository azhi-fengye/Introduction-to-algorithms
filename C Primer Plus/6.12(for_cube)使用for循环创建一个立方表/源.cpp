#include<stdio.h>
int main(void)
{
	int num;
	printf_s("    n  n cubed\n");
	for (int num = 1; num <=9; num++)
	{
		printf_s("%5d %8d\n", num,num * num * num);
	}
	return 0;
}