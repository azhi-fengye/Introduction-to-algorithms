#include<stdio.h>
int main(void)
{
	int ch;
	printf_s("Please enter an ASCII value\n");//������һ��ASCII��ֵ
	scanf_s("%d", &ch);
	printf_s("Converted to:%c\n", ch);//ת��Ϊ��
	return 0;
}