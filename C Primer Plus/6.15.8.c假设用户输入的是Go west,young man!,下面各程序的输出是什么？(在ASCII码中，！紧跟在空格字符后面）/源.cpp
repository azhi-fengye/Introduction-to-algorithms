#include<stdio.h>
int main(void)
{
	char ch;
	do
	{
		scanf_s("%c", &ch, sizeof(ch));
		printf_s("%c", ch);
	} while (ch!='g');
	return 0;
}