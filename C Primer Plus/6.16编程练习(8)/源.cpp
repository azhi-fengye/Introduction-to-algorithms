/*��дһ������Ҫ���û���������������������ӡ����֮����������˻��Ľ����
���û����������֮ǰ������Ӧѭ�������û������ÿ��ֵ*/
#include<stdio.h>
int main(void)
{
	double n, m,dbtm;//dbtm:difference between two numbers:����֮��
	printf_s("������������������������ӡ����֮����������˻��Ľ��:");
	while (scanf_s("%lf%lf",&n,&m)==2)
	{
		dbtm = (n - m) / (n * m);
		printf_s("(%.3lf-%.3lf)/(%.3lf*%.3lf)=%.3lf\n", n, m, n, m, dbtm);
		printf_s("��������������µĸ�������������ӡ����֮����������˻��Ľ��:");
	}
	return 0;
}