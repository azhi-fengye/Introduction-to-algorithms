#include<stdio.h>
#include<string.h>
#include<ctype.h>
const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[] = { "not a palindrome","a regular palindrome","a mirrored string","a mirrored palindrome" };
char r(char ch) {
	if (isalpha(ch))
	{
		return rev[ch - 'A']; 
	}
	else
	{
		return rev[ch - '0' + 25];
	}
}
int main()
{
	char s[30];
	s[29] = {};
	while (scanf_s("%s",s,29))
	{
		int len = strlen(s);
		int p = 1, m = 1;
		for ( int i = 0; i < (len+1)/2; i++)
		{
			if (s[i] != s[len - 1 - i])//如果s[i]不等于s[len-1-i]
			{
				p = 0; //不是回文串
			}
			if (r(s[i]) != s[len - 1 - i])
			{
				m = 0;//不是镜像串
			}
		}
		printf("%s -- is %s.\n\n", s, msg[m*2+p]);
		printf("%d", len);
	}
	return 0;
}