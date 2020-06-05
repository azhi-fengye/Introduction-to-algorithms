#include<stdio.h>
int main(void)
{
	int n = 0;
	size_t intsize;
	intsize = sizeof(int);
	printf_s("n=%d,n has %zd bytes;all ints have %zd byte.\n",//n有%zd字节;所有的int都有%zd字节。
		n, sizeof n, intsize);
	return 0;
}