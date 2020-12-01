/*编写一个程序，创建一个包含8个元素得int类型数组，分别把数组元素设置为2的前8次幂。
使用for循环设置数组元素的值，使用do while循环显示数组元素的值。*/
#include<stdio.h>
int pow_int(int x, int y);
int main(void)
{
	int two_power[8];
	int i;
	for (i = 0; i < 8; i++)
	{
		two_power[i] = pow_int(2, i + 1);
	}
	i = 0;
	do
	{
		printf_s("%d\n", two_power[i]);
	} while (++i<8);
}
int pow_int(int x, int y)
{
	int intpow = 1;
	for (int i = 0; i < y; i++)
	{
		intpow *= x;
	}
	return intpow;
}