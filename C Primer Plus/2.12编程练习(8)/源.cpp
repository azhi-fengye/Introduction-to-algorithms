#include<stdio.h>
void two()
{
	printf_s("two\n");
}
void one()
{
	printf_s("one\n");
	two();
	printf_s("three\n");
}
int main(void)
{
	printf_s("starting now:\n");
	one();
	printf("done!");
	return 0;
}