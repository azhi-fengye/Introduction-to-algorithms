#include<stdio.h>
int main(void)
{
	const int FIRST_OZ = 46;//2013����
	const int NEXT_OZ = 20;//2013����
	int ounces, cost;
	printf_s(" ounces cost\n");//��˾ �ɱ�
	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
		printf_s("%-5d  $%4.2f\n", ounces, cost / 100.0);
	return 0;
}