/*��дһ�������ȡ���룬����#�ַ�ֹͣ������Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII�루ʮ���ƣ���
ÿ�д�ӡ8�����ַ�-ASCII�롱��ϡ����飺ʹ���ַ���������ģ�������%����ÿ8��ѭ������ʱ��ӡһ�����з���*/
#include<stdio.h>
#define STOP '#'
int main(void)
{
	char ch;
	int count=0;
	while ((ch=getchar())!='#')
	{
		count++;
		if (ch=='\n')
		{
			printf_s("\\n-%d",ch);
		}
		else
		{
			printf_s("%c-%d|", ch, ch);
		}

		if (count%8==0)
		{
			printf_s("\n");
			count = 0;
		}
	}
	return 0;

}