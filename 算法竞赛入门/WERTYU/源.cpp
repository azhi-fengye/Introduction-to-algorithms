#include<stdio.h>
char s[] = "`1234567890-=qwertyuiop[]\asdfghjkl;'zxcvbnm,./";
int main()
{
	int i, c;
	while ((c=getchar())!=EOF)
	{
		for (i = 1; s[i] && s[i] != c; i++);//终止条件为a[i]==0（也就是s[i]里面没有值与s[i]==c（s[i]==输入的值）
		if (s[i])
		{
			putchar(s[i - 1]);
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}