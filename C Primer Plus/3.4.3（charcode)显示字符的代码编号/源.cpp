#include<stdio.h>
int main(void)
{
	char ch;//ch='4'时，使用%d转义说明，输出52：意思为字符4的ASCII值为52。ch=4时，使用%c转义说明则输出非打印控制字符：意思是ASCII值为4，输出字符。ch='\7'为八进制；ch='/x7'为16进制。
	printf_s("Please enter a character.\n");//请输入一个字符。
	scanf_s("%c", &ch);//输入一个字符打印出字符和其的ASCII值。
	printf_s("The code for %c is %d.\n", ch, ch);//
	return 0;
}