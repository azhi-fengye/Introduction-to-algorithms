/*������������a��b,�������ߵ�ֵ��Ȼ�����*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b,t;
	scanf_s("%d %d",&a,&b);
	t = a;
	a = b;
	b = t;
	printf("%d %d", a, b);
	system("pause");
	return 0;
}