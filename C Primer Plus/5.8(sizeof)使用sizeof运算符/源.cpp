#include<stdio.h>
int main(void)
{
	int n = 0;
	size_t intsize;
	intsize = sizeof(int);
	printf_s("n=%d,n has %zd bytes;all ints have %zd byte.\n",//n��%zd�ֽ�;���е�int����%zd�ֽڡ�
		n, sizeof n, intsize);
	return 0;
}