/*�����û�������������*/
#include<stdio.h>
int main(void)
{
	long num;
	long sum = 0L;//��sum��ʼ��Ϊ0;
	printf_s("Please enter an integer to be summed ");//������һ��Ҫ��͵�����
	printf_s("(q to quit): ");//q�˳�
	while (scanf_s("%ld", &num)==1)
	{
		sum = sum + num;
		printf_s("Please enter next ineger (q to quit): ");//�������µ�������q�˳���
	}
	printf_s("Those integers sum to %ld.\n", sum);//��Щ�����ĺ���
	return 0;
}