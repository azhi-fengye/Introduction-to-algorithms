#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
	printf_s("Some number limits for this system:\n");//本系统的一些数字限制:
	printf_s("Biggest int:%d\n", INT_MAX);//最大的整数
	printf_s("Smallest long long:%lld\n	", LLONG_MIN);//最小长整数
	printf_s("One byte=%d bits on this system.\n", CHAR_BIT);//一个字节=%d位在这个系统
	printf_s("Largest double:%e\n", DBL_MAX);//最大的double
	printf_s("Samllest normal float:%e\n", FLT_MIN);//总正常浮动：
	printf_s("float precision=%d digits\n", FLT_DIG);//浮点精度= % d数字
	printf_s("float epsilon=%e\n", FLT_EPSILON);//浮动=
	return 0;
}