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
/*I didn't read the "I'm a Programming Fool" best seller.:��û�ж���������һ�����ɵ�ϡ��ĳ����顣
There are 50 non-quote characters.:��50���������ַ���*/