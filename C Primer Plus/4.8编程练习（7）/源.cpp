/*编写一个程序，将一个double类型的变量设置为1.0/3.0，一个float类型的变量设置为1.0/3.0。分别显示两次
计算的结果各三次：一次显示小数点后面6位；一次显示小数点后面12位：一次显示小数点后面16位数字。
程序中要包含float.h文件，并显示FLT_DIG和DBL_DIG的值。1.0/3.0的值与这些值一致吗？*/
#include<stdio.h>
#include<float.h>
int main(void)
{
	double D_vlaue = 1.0 / 3.0;
	float F_vlaue = 1.0 / 3.0;
	printf_s("%d %d\n",DBL_DIG,FLT_DIG);
	/*DBL_DIG和FLT_DIG两个宏在float.h头文件下面，
	用来说明double、float两种数据类型有效数字的位数，
	注意不是小数点后面的有效位数，而是所有位数。*/
	printf_s("%.6f %.6f\n", D_vlaue, F_vlaue);
	printf_s("%.12f %.12f\n", D_vlaue, F_vlaue);
	printf_s("%.16f %.16f\n", D_vlaue, F_vlaue);
	return 0;
}
