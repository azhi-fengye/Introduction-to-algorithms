#include<stdio.h>
int main()
{
	int c, q = 1;
	while ((c=getchar())!=EOF)
	{
		if (c == '"')
		{
			printf("%s", q ? "“" : "”");//q为真吗如果是则输出“，如果为假则输出”。
			q = !q;
		}
		else
		{
			printf("%c", c);
		}
	}
	return 0;
}