/*ʹ��switch��д��ϰ4*/
#include<stdio.h>
int main(void)
{
	char ch;
	int th1 = 0, th2 = 0;
	while ((ch=getchar())!='#')
	{
		switch (ch)
		{
		case '.':putchar('!');
			th1++;
			break;
		case '!':putchar('!');
			putchar('!');
			th2++;
		default:
			putchar(ch);
			break;
		}
	}
	printf("!�滻�Ĵ���Ϊ%d,.�滻�Ĵ���Ϊ%d", th2, th1);
	return 0;
}