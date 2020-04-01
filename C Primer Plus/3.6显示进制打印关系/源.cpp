#include<stdio.h>
int main(void)
{
	int x = 100;
	printf_s("dec=%d;octal=%o;hex=%x\n", x, x, x);//octal：八进制的；hex：16进制的。
	printf_s("dec=%d;octal=%#o;hex=%#x\n", x, x, x);//如果要在八进制和十六进制前显示0和0x前缀，要分别在转换说明中加入#。%o是八进制；%x是十六进制。
	return 0;
}