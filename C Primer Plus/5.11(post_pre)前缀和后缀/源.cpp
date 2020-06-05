#include<stdio.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;
	a_post = a++;//++后缀：使用a的值之后，递增a
	pre_b = ++b;//++前缀：使用b的值之前，递增b
	printf_s("a  a_post  b  pre_b \n");
	printf_s("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
	return 0;
}