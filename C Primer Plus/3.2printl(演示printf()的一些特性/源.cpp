#include<stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;
	printf_s("Doing it right:");//��������ȷ��
	printf_s("%d minus #d is %d\n", ten, 2, ten - two);
	printf_s("Doing it wrong:");//�����Ǵ����
	printf_s("%d minus %d is %d\n", ten);//��Ϊ��������%dû���ṩ�κε�ֵ�����Դ�ӡ����ֵ���ڴ��е�����ֵ��
	return 0;
}