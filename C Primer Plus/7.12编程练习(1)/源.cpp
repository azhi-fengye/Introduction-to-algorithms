/*��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո��������з��������������ַ���������*/

#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int count = 0, space_count = 0, Newline_count = 0;//Newline:���з���space_count:�ո���
	while ((ch = getchar()) != '#')
	{
		if (isspace(ch))
		{
			space_count++;
		}
		else if (ch == '\n')
		{
			Newline_count++;
		}
		else
		{
			count++;
		}
	}
	printf_s("������������%d���ո���%d�����з���һ����%d�������ַ�", space_count, Newline_count, count);
	return 0;
}