#include<stdio.h>
int main()
{
	int c, q = 1;
	while ((c=getchar())!=EOF)
	{
		if (c == '"')
		{
			printf("%s", q ? "��" : "��");//qΪ���������������������Ϊ�����������
			q = !q;
		}
		else
		{
			printf("%c", c);
		}
	}
	return 0;
}