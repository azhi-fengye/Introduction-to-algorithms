#include<stdio.h>
int main(void)
{
	char ch;
	while ((ch=getchar())!='#')
	{
		if (ch != '\n')
		{
			printf_s("Step 1\n");
			if (ch=='b')
			{
				break;
			}
			else if (ch!='c')
			{
				if (ch != 'h')
				{
					printf_s("Step 2\n");
				}
				printf_s("Step 3\n");
			}
		}
	}
	printf_s("Done\n");
	return 0;
}