/*��д�����ȡ���룬����#ֹͣ������ei���ֵĴ������ó���Ҫ��¼ǰһ���ַ��͵�ǰ�ַ����á�Receive eieio award"����������������*/
#include<stdio.h>
int main(void)
{
	int count = 0;
	char ch, ch_piror=0;//ch_piror��ǰһ���ַ�
	while ((ch=getchar())!='#')
	{
		if ((ch_piror == 'e') && (ch == 'i')) {
			count++;
		}
		ch_piror = ch;
	}
	printf_s("eiһ������%d��", count);
	return 0;
}