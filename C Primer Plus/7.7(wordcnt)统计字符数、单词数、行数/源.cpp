#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main(void)
{
	char c;
	char prev;
	long n_chars = 0L;
	int n_lines = 0;
	int n_words = 0;
	int	p_lines = 0;
	bool inword = false;
	printf_s("Enter text to be analyzed(| to terminate):\n"); //输入文本进行分析( 输入|终止) :
	prev = '\n';
	while ((c=getchar())!=STOP)
	{
		n_chars++;//每输入一个字符如果这个字符不等于|，则字符数加1.
		if (c != '\n')
		{
			n_lines++;//当输入的字符不是换行符时，统计行数加1.
		}
		if (!isspace(c) && !inword)//此时因为inword为true，直到遇到下一个空白字符时被换成false时才会继续统计单词数量。
		{
			inword = true;//开始一个新的单词；
			n_words++;
		}
		if (isspace(c) && inword)//此时到达单词的末尾。把inword切换为false，以便于计算下一个单词。
		{
			inword = false;
		}
		prev=c;
	}
	if (prev!='\n')//判断最后一个字符的值。
	{
		p_lines = 1;
	}
	printf_s("characters=%1d,words=%d,lines=%d,", n_chars, n_words, n_lines);
	printf_s("partial lines=%d\n", p_lines);
	return 0;
}