#include<stdio.h>
int main(void)
{
	char ch;
	scanf_s("%c", &ch,sizeof(ch));
	while (ch!='g')
	{
		printf_s("%c", ch);
		scanf_s("%c", &ch, sizeof(ch));
	}
	return 0;
}