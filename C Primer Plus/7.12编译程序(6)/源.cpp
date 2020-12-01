/*编写程序读取输入，读到#停止，报告ei出现的次数。该程序要记录前一个字符和当前字符。用“Receive eieio award"这样的输入来测试*/
#include<stdio.h>
int main(void)
{
	int count = 0;
	char ch, ch_piror=0;//ch_piror是前一个字符
	while ((ch=getchar())!='#')
	{
		if ((ch_piror == 'e') && (ch == 'i')) {
			count++;
		}
		ch_piror = ch;
	}
	printf_s("ei一共出现%d次", count);
	return 0;
}