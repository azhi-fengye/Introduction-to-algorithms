#include<stdio.h>
#define PERIOD '.'
int main(void)
{
	char ch;
	int charcount = 0;
	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch != '\'')
		{
			charcount++;

		}

	}
	printf_s("There are %d non-quote characters.\n", charcount);
	return 0;
}
/*I didn't read the "I'm a Programming Fool" best seller.:我没有读过“我是一个编程傻瓜”的畅销书。
There are 50 non-quote characters.:有50个非引号字符。*/