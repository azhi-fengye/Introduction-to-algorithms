/*
使用嵌套循环，按下面的格式打印字符：
$
$$
$$$
$$$$
$$$$$
*/
#include<stdio.h>
int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf_s("$");
		}
		printf_s("\n");
	}
	return 0;
}