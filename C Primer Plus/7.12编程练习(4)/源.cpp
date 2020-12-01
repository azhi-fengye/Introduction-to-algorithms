/*使用if else 语句编写一个程序读取输入，读到#停止。用感叹号替换句号，用两个感叹号替换原来的感叹号，最好报告进行了多少次替换。*/
#include<stdio.h>
int main(void)
{
	char ch;
	int th1 = 0,th2=0;
	while ((ch=getchar())!='#')
	{
		if (ch =='.')
		{
			putchar('!');
			th1++;
		}
		else if (ch=='!')
		{
			putchar('!');
			putchar('!');
			th2++;
		}
		else
		{
			putchar(ch);
		}
		
	}
	printf_s(".替换了%d次，!替换了%d次", th1, th2);
	th1 = 0, th2 = 0;
	return 0;
}