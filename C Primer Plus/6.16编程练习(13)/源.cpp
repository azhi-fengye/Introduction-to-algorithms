/*��дһ�����򣬴���һ������8��Ԫ�ص�int�������飬�ֱ������Ԫ������Ϊ2��ǰ8���ݡ�
ʹ��forѭ����������Ԫ�ص�ֵ��ʹ��do whileѭ����ʾ����Ԫ�ص�ֵ��*/
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