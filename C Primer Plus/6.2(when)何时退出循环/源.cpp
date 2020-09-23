#include<stdio.h>
int main(void)
{
	int n = 5;
	while (n<7)
	{
		printf_s("n=%d\n", n);
		n++;
		printf_s("now n=%d\n", n);
	}
	printf_s("The loop has finished.\n");//Ñ­»·½áÊøÁË¡£
	return 0;
}