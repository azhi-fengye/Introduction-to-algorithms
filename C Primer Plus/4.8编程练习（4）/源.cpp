/*
��дһ��������ʾ�û�������ߣ���λ��Ӣ�磩��������Ȼ��������ĸ�ʽ��ʾ�û����������Ϣ��
Dabney,you are 6.208 feet tall
ʹ��float���ͣ�����/��Ϊ���š������Ը�⣬����Ҫ���û�������Ϊ��λ������ߣ�������Ϊ��λ�ֳ�����
*/
#include<stdio.h>
int main(void)
{
	float a;
	char name[20];
	printf_s("������������ߣ�cmΪ��λ����\n");
	scanf_s("%f", &a);
	printf_s("����������������\n");
	scanf_s("%s", name,sizeof(name));
	printf_s("%s,you are %.3f feet tall.", name, a);
}