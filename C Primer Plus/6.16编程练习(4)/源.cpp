/*
ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
A
BC
DEF
GHIJ
KLMNO
PQRSTU
������ϵͳ��ʹ��������˳�����Ĵ��룬�������ϰ3�ķ��������
*/
#include<stdio.h>
int main(void)
{
	char ch = 'A';
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf_s("%c",ch);
			ch++;
		}
		printf_s("\n");
	}
	return 0;
}