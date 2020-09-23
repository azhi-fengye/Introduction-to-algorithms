#include<stdio.h>
int main(void)
{
	const int FIRST_OZ = 46;//2013邮资
	const int NEXT_OZ = 20;//2013邮资
	int ounces, cost;
	printf_s(" ounces cost\n");//盅司 成本
	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
		printf_s("%-5d  $%4.2f\n", ounces, cost / 100.0);
	return 0;
}