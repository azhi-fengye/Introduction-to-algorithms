#include<stdio.h>
#define SEC_PER_MIN 60//sec:second(��),min:minute(��)
int main(void)
{
	int sec, min, left;
	printf_s("Convert seconds to minutes and seaconds!\n");//ת���뵽���Ӻ���!
	printf_s("Enter the number of seconds (<=0 to quit):\n");//��������(<=0�˳�)
	scanf_s("%d", &sec);
	while (sec>0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf_s("%d seconds is %d minutes,%d seconds.\n", sec, min, left);//%d����%d���ӣ�%d�롣
		printf_s("Enter new value(<=0 to quit):\n");//������ֵ��<=0��ʾ�˳���:
		scanf_s("%d", &sec);
	}
	return 0;
}