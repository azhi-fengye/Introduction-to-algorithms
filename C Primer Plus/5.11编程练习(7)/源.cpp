/*��дһ��������ʾ�û�����һ��double��ֵ������ӡ����������ֵ���Լ����һ���������㲢��ӡ����ֵ��main()����Ҫ���û������ֵ���ݸ��ú�����*/
#include<stdio.h>
double cude(double n);
int main(void)
{
	double input;
	printf_s("Enter a floating-point value:\n");
	scanf_s("%lf", &input);
	printf_s("The cube of this number is��%lf",cude(input));
}
double cude(double n)
{
	return n*n*n;
}