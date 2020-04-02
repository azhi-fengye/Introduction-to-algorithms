#include<stdio.h>
int main(void)
{
	unsigned int un = 3000000000;//int为32位和short为16的系统
	short end = 200;
	long big = 65537;
	long long verybig = 1234567890642;
	char response;
	printf_s("un=%u and not %d\n", un, un);/*un=3000000000 and not -1294967296(unsigned为无符号的int，范围为0~4294967295；
										   int的范围为-2147493648~2147483647,超过后会从起始点开始，int从-2147483648开始）*/
	printf_s("end=%hd and %d\n", end, end);//end=200 and 200
	printf_s("big=%ld and not %hd\n",big, big);//big=65537 and not 1(65537写成二进制后16位只有1.%hd转换说明只会查看后16位所以输出1.
	printf_s("verybig=%lld and not %ld\n", verybig, verybig);//verybig=1234567890642 and not 1912276690（同理 1234567890642写成二进制后32位的值转换成10进制为1912276690.
	return 0;
}