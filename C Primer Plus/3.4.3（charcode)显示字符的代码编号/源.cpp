#include<stdio.h>
int main(void)
{
	char ch;//ch='4'ʱ��ʹ��%dת��˵�������52����˼Ϊ�ַ�4��ASCIIֵΪ52��ch=4ʱ��ʹ��%cת��˵��������Ǵ�ӡ�����ַ�����˼��ASCIIֵΪ4������ַ���ch='\7'Ϊ�˽��ƣ�ch='/x7'Ϊ16���ơ�
	printf_s("Please enter a character.\n");//������һ���ַ���
	scanf_s("%c", &ch);//����һ���ַ���ӡ���ַ������ASCIIֵ��
	printf_s("The code for %c is %d.\n", ch, ch);//
	return 0;
}