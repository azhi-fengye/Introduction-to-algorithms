/*
��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾ��λ�����ܲ�ͬ��
a.The input is 21.3 or 2.1e+001.
b.The input is +21.290 or 2.129E+001.
*/
#include<stdio.h>
int main(void)
{
	float a;
	scanf_s("%f",&a);
	printf_s("The input is %.1f or %.1e\n",a,a);
	printf_s("The input is %+.3f or %.3E\n",a,a);
	return 0;
}