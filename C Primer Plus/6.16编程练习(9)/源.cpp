/*��дһ������Ҫ���û���������������������ӡ����֮����������˻��Ľ����
���û����������֮ǰ������Ӧѭ�������û������ÿ��ֵ��ʹ��һ���������ؼ���Ľ��*/
#include<stdio.h>
double func1(double n, double m);
int main(void)
{
	double n, m;
	printf_s("������������������������ӡ����֮����������ɼ��Ľ��:");
	while (scanf_s("%lf%lf", &n, &m) == 2)
	{
		printf_s("(%.3lf-%.3lf)/(%.3lf*%.3lf)=%.3lf\n", n, m, n, m, func1(n, m));
		printf_s("��������������µĸ�������������ӡ����֮����������˻��Ľ��:");
	}
}
double func1(double n, double m)
{
	return (n - m) / (n * m);
}
