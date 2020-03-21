/*输入两个整数a和b,交换二者的值，然后输出*/
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