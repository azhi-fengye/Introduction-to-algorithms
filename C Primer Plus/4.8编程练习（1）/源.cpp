/*��дһ��������ʾ�û����������գ�Ȼ���ԡ������ա��ĸ�ʽ��ӡ������*/
#include<stdio.h>
int main(void)
{
	char ming[20], xing[20];
	printf_s("������������:\n");
	scanf_s("%s", ming,sizeof(ming));
	printf_s("������������:\n");
	scanf_s("%s", xing,sizeof(xing));
	printf_s("��%s,%s��", ming, xing);
	return 0;
}