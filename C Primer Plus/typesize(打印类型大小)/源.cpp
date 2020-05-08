#include<stdio.h>
int main(void)
{
	//C99为类型大小提供%zd转换说明
	printf_s("Type int has a size of %zd byers.\n", sizeof(int));//4
	printf_s("Type char has a size of %zd bytes.\n", sizeof(char));//4
	printf_s("Type long has a size of %zd bytes.\n", sizeof(long));//4
	printf_s("Type long long has a size of %zd bytes.\n", sizeof(long long)); //8juuuuu
	printf_s("Type double has a size of %zd bytes.\n", sizeof(double));//8
	printf_s("Type long double has a size of %zd bytes.\n", sizeof(long double));//8
	return 0;
}