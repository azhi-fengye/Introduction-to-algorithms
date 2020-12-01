#include<stdio.h>
int main(void)
{
	int m1 = 1, m2 = 0;
	for (int i = 1; i < 7; i++)
	{
		printf_s("%d", m1);
		m1 = m1 + m2;
		m2 = m1;
	}
	return 0;
}