/*输入一个三位数，分解出它的个十百位，反转后输出*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	scanf_s("%d", &a);
	b = a % 10 * 100 + a / 10 % 10 * 10 + a / 100;
	printf("%d", b);
	system("pause");
	return 0;
}	