#include<stdio.h>
int main(void)
{
	char ch;
	scanf_s("%c", &ch, sizeof(ch));
	for (ch='$';ch!='g';scanf_s("%c",&ch,sizeof(ch) ))
	{
		printf_s("%c", ch);
	}
	return 0;
}