/*��дһ�����򣬶�ȡһ�����룬Ȼ�����������ݵ����ӡ�������԰����봢����char���͵������У�����ÿ���ַ�������255.
����һ�£�����%cת��˵����scanf()����һ��ֻ�ܴ������ж�ȡһ���ַ����������û�����Eenter��ʱscanf()����������һ�������ַ�(\n)*/
#include<stdio.h>
#include<string.h>
#define SIZE 255
int main(void)
{
	char str[SIZE];
	int i = 0;
	str[SIZE - 1] = {};
	scanf_s("%c", &str[i], 1);
	while (str[i] != '\n')
	{
		i++;
		scanf_s("%c", &str[i], 1);
	}
	for (i--; i >= 0; i--)
	{
		printf_s("%c", str[i]);
	}
	return 0;
}