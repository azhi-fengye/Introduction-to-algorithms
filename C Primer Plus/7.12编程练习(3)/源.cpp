/*��дһ�����򣬶�ȡ����ֱ���û�����0����������󣬳���Ӧ�����û������ż����������0��������
��Щż����ƽ��ֵ�������������������������ƽ��ֵ��*/
#include<stdio.h>
int main(void)
{
	int number;
	int even_number=0;//ż��
	int odd_number=0;//����
	int even_sum=0;//ż����
	int odd_sum=0;//������
	while (scanf_s("%d",&number)&&number!=0)
	{
		if (number % 2 == 0)
		{
			even_number++;
			even_sum += number;
		}
		else
		{
			odd_number++;
			odd_sum += number;
		}
	}
	if (even_number>0)
	{
		printf_s("�������ż������Ϊ:%d����Щż����ƽ��ֵΪ:%.3f��", even_number, (float)even_sum / even_number);
	}
	else
	{
		printf_s("�������ż������Ϊ:0����Щż����ƽ��ֵΪ:0��");
	}
	if (odd_number>0)
	{
		printf_s("���������������Ϊ:%d����Щ������ƽ��ֵΪ:%.3f��", odd_number, (float)odd_sum / odd_number);
	}
	else
	{
		printf_s("���������������Ϊ:0����Щ������ƽ��ֵΪ:0��");
	}
	return 0;
}