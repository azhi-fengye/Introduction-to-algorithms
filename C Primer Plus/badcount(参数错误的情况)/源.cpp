#include<stdio.h>
int main(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;
	printf_s("%d\n", n, m);
	printf_s("%d %d %d\n", n);
	printf_s("%d %d\n", f, g);
	getchar();
	return 0;
}