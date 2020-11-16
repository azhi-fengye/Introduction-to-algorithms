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
	printf_s("Enter text to be analyzed(| to terminate):\n"); //�����ı����з���( ����|��ֹ) :
	prev = '\n';
	while ((c=getchar())!=STOP)
	{
		n_chars++;//ÿ����һ���ַ��������ַ�������|�����ַ�����1.
		if (c != '\n')
		{
			n_lines++;//��������ַ����ǻ��з�ʱ��ͳ��������1.
		}
		if (!isspace(c) && !inword)//��ʱ��ΪinwordΪtrue��ֱ��������һ���հ��ַ�ʱ������falseʱ�Ż����ͳ�Ƶ���������
		{
			inword = true;//��ʼһ���µĵ��ʣ�
			n_words++;
		}
		if (isspace(c) && inword)//��ʱ���ﵥ�ʵ�ĩβ����inword�л�Ϊfalse���Ա��ڼ�����һ�����ʡ�
		{
			inword = false;
		}
		prev=c;
	}
	if (prev!='\n')//�ж����һ���ַ���ֵ��
	{
		p_lines = 1;
	}
	printf_s("characters=%1d,words=%d,lines=%d,", n_chars, n_words, n_lines);
	printf_s("partial lines=%d\n", p_lines);
	return 0;
}