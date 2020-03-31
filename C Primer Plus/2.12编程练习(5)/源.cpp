#include<stdio.h>
void br()
{
	printf_s("Brazil,Russia");
}
void ic()
{
	printf_s("India,China");
}
int main(void)
{
	br();
	printf_s(",");
	ic();
	printf_s("\n");
	br();
	printf_s("\n");
	ic();
	return 0;
}