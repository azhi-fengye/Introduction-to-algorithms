/*Rabnud��ʿ������һ���罻Ȧ���������5�����ѡ���ע�⵽������������������ķ�ʽ������
��1������1�����ѣ�ʣ�µ�����������������2������2�����ѣ�ʣ�µ���������������һ����ԣ���N������N�����ѣ�ʣ�µ����ѷ�����
��дһ�����򣬼��㲢��ʾRabnud��ʿÿ�ܵ������������ó���һֱ���У�ֱ�������˰������˰����Ǵ��Թ���һ�������罻Ȧ�����ȶ���ϵ�ĳ�Ա�����ֵ��
��ֵ��Լ��150��*/
#include<stdio.h>
int square_friend(int x);
int main(void)
{
	int friend_number=5;
	int count = 1;
	do
	{
		friend_number -= count;
		friend_number=2*friend_number;
		printf_s("week=%d     friend_number=%d\n", count, friend_number);
		count++;
	} while (friend_number<=150);
	return 0;
}
int square_friend(int x)
{
	return x * x;
}