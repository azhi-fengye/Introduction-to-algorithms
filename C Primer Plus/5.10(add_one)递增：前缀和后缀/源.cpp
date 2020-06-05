#include<stdio.h>
int main(void)
{
	int ultra = 0, super = 0;
	while (super < 5)
	{
		super++;
		++ultra;
		printf_s("super=%d,ulrta=%d\n", super, ultra);
	}
	return 0;
}