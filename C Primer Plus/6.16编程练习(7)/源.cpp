/*��дһ�������һ�����ʶ���һ���ַ������У�Ȼ�����ӡ������ʡ���ʾstrlen()��������4�½��ܹ��������ڼ����������һ���ַ����±�*/
#include<stdio.h>
#include<string.h>
#define WORDLENGTH 20
int main(void)
{
	char word[WORDLENGTH];
	word[WORDLENGTH - 1] = { 0 };
	printf_s("������һ�����ʣ�\n���򽫻ᵹ���ӡ�õ��ʣ�");
	scanf_s("%s", word, WORDLENGTH);
	for (int i = strlen(word)-1; i >=0; i--)
	{
		printf_s("%c",word[i]);
	}
	return 0;
}