/*��дһ�������ӡһ�����ÿһ�д�ӡһ��������������ƽ����������������Ҫ���û�������������ޡ�ʹ��һ��forѭ����*/
#include<stdio.h>
long power(int y);
int main(void)
{
	int x, y;
	printf_s("������������ޣ�\n");
	scanf_s("%d", &x);
	printf_s("������������ޣ�\n");
	scanf_s("%d", &y);
	printf_s("ԭ��\tƽ��\t����\t\n");
	for (int i = x; i <=y ; i++)
	{
		printf_s("%d\t%d\t%ld\n", i, i * i, power(i));
	}
	return 0;
}
long power(int y)
{
	return y * y * y;
}