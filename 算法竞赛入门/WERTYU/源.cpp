#include<stdio.h>
char s[] = "`1234567890-=qwertyuiop[]\asdfghjkl;'zxcvbnm,./";
int main()
{
	int i, c;
	while ((c=getchar())!=EOF)
	{
		for (i = 1; s[i] && s[i] != c; i++);//��ֹ����Ϊa[i]==0��Ҳ����s[i]����û��ֵ��s[i]==c��s[i]==�����ֵ��
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