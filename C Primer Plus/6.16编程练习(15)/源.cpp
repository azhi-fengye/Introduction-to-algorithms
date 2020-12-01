/*编写一个程序，读取一行输入，然后把输入的内容倒序打印处理。可以把输入储存在char类型的数组中，假设每行字符不超过255.
回忆一下，根据%c转换说明，scanf()函数一次只能从输入中读取一个字符，而且在用户按下Eenter键时scanf()函数会生成一个换行字符(\n)*/
#include<stdio.h>
#include<string.h>
#define SIZE 255
int main(void)
{
	char str[SIZE];
	int i = 0;
	str[SIZE - 1] = {};
	scanf_s("%c", &str[i], 1);
	while (str[i] != '\n')
	{
		i++;
		scanf_s("%c", &str[i], 1);
	}
	for (i--; i >= 0; i--)
	{
		printf_s("%c", str[i]);
	}
	return 0;
}