#include<stdio.h>
int main(void)
{
	int n;
	printf_s("Please enter three integers:\n");//��������������:
	scanf_s("%*d %*d %d", &n);
	printf_s("The last integer was:%d\n", n);//���һ��������:
	return 0;
}