/*��дһ�����򣬴���һ������26��Ԫ�ص����飬�������д���26��Сд��ĸ��Ȼ���ӡ�������������*/
#include<stdio.h>
#define SIZE 28
int main(void)
{
	char lalter[SIZE];
	for (int i = 0; i <26; i++)
	{
		lalter[i] = i + 97;
	}
	for (int  i = 0; i < 26; i++)
	{
		printf_s("%c", lalter[i]);
	}
	return 0;
}