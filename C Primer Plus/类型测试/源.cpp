#include<stdio.h>
#include<ctype.h>
const char* mas[] = { "aaaaaa" };
const char s[] = { 'a','aaa' };
int main(void)
{
	char s[5];
	scanf_s("%s", s, 5);
	printf_s("%s", s);
	if (isalpha(s[0])==0)
	{
		printf_s("1");
	}
	return 0;
}