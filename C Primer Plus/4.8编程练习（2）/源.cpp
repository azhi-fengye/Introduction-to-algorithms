/*��дһ��������ʾ�û��������֣���ִ�����²�����
a.��ӡ���֣�����˫���ţ�
b.�ڿ��Ϊ20���ֶ��Ҷ˴�ӡ���֣�����˫���ţ�
c.�ڿ��Ϊ20���ֶ���˴�ӡ���֣�����˫���ţ�
d.�ڱ�������ȳ�3���ֶ��д�ӡ���֣�*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[20] = {};
	int len_ming, len_xing;
	printf_s("�������������֣�\n");
	scanf_s("%s", name,20);
	len_ming = strlen(name);
	printf_s("��%s��\n",name);
	printf_s("��%20s��\n", name);
	printf_s("��%-20s��\n", name);
	printf_s("��%-*s��", len_ming+3, name);
	return 0;
}