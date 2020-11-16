#include<stdio.h>
int main(void)
{
	int i = 0;
	while (i<3)
	{
		switch (i++)
		{
		case 0:printf_s("fat");
		case 1:printf_s("hat");
		case 2:printf_s("cat");
		default:printf_s("oh no!");
		}
		putchar('\n');
	}
	return 0;
}