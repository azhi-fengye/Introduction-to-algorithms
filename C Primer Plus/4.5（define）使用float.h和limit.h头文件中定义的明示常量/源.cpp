#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
	printf_s("Some number limits for this system:\n");//��ϵͳ��һЩ��������:
	printf_s("Biggest int:%d\n", INT_MAX);//��������
	printf_s("Smallest long long:%lld\n	", LLONG_MIN);//��С������
	printf_s("One byte=%d bits on this system.\n", CHAR_BIT);//һ���ֽ�=%dλ�����ϵͳ
	printf_s("Largest double:%e\n", DBL_MAX);//����double
	printf_s("Samllest normal float:%e\n", FLT_MIN);//������������
	printf_s("float precision=%d digits\n", FLT_DIG);//���㾫��= % d����
	printf_s("float epsilon=%e\n", FLT_EPSILON);//����=
	return 0;
}