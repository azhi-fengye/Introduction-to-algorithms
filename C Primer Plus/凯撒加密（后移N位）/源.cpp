#include<stdio.h>
char s[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
int main(void)
{
	int i, c, ast;
	scanf_s("%d", &ast);
	while ((c = getchar()) != EOF)
	{
		for (i = 1; s[i] && s[i] != c; i++);
		if (s[i])
		{
			putchar(s[i + (ast % 26)]);
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}