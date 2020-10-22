/*编写一个程序，创建一个包含26个元素的数组，并在其中储存26个小写字母。然后打印数组的所有内容*/
#include<stdio.h>
#define SIZE 28
int main(void)
{
	char lalter[SIZE];
	for (int i = 0; i <26; i++)
	{
		lalter[i] = i + 97;
	}
	for (int  i = 0; i < 26; i++)
	{
		printf_s("%c", lalter[i]);
	}
	return 0;
}