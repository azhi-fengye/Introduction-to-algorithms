/*ʹ��if else ����дһ�������ȡ���룬����#ֹͣ���ø�̾���滻��ţ���������̾���滻ԭ���ĸ�̾�ţ���ñ�������˶��ٴ��滻��*/
#include<stdio.h>
int main(void)
{
	char ch;
	int th1 = 0,th2=0;
	while ((ch=getchar())!='#')
	{
		if (ch =='.')
		{
			putchar('!');
			th1++;
		}
		else if (ch=='!')
		{
			putchar('!');
			putchar('!');
			th2++;
		}
		else
		{
			putchar(ch);
		}
		
	}
	printf_s(".�滻��%d�Σ�!�滻��%d��", th1, th2);
	th1 = 0, th2 = 0;
	return 0;
}