/*编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。*/

#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int count = 0, space_count = 0, Newline_count = 0;//Newline:换行符；space_count:空格数
	while ((ch = getchar()) != '#')
	{
		if (isspace(ch))
		{
			space_count++;
		}
		else if (ch == '\n')
		{
			Newline_count++;
		}
		else
		{
			count++;
		}
	}
	printf_s("您的输入中有%d个空格，有%d个换行符，一共有%d个其他字符", space_count, Newline_count, count);
	return 0;
}