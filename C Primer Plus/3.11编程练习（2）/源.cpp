#include<stdio.h>
int main(void)
{
	int ch;
	printf_s("Please enter an ASCII value\n");//请输入一个ASCII的值
	scanf_s("%d", &ch);
	printf_s("Converted to:%c\n", ch);//转换为：
	return 0;
}