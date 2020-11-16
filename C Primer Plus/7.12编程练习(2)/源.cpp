/*编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。
每行打印8个“字符-ASCII码”组合。建议：使用字符计数和求模运算符（%）在每8个循环周期时打印一个换行符。*/
#include<stdio.h>
#define STOP '#'
int main(void)
{
	char ch;
	int count=0;
	while ((ch=getchar())!='#')
	{
		count++;
		if (ch=='\n')
		{
			printf_s("\\n-%d",ch);
		}
		else
		{
			printf_s("%c-%d|", ch, ch);
		}

		if (count%8==0)
		{
			printf_s("\n");
			count = 0;
		}
	}
	return 0;

}