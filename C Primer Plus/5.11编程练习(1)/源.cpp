/*��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣
ʹ��#define����const����һ����ʾ60�ķ��ų�����const������ͨ��whileѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ��*/
#include<stdio.h>
#define M_TO_H 60
int main(void)
{
	int min, hour,left;
	printf_s("�����������(0������ֹѭ��)��\n");
	scanf_s("%d", &min);
	while (min > 0)
	{
		hour = min / M_TO_H;
		left = min % M_TO_H;
		printf_s("Now time:%d:%d\n", hour, left);
		printf_s("��һ�����������(0������ֹѭ��)��");
		scanf_s("%d", &min);
	}
	return 0;
}