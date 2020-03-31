#include<stdio.h>
void smile(void)
{
	printf_s("Smile!");
}
int main(void)
{
	smile();
	smile();
	smile();
	printf_s("\n");
	smile();
	smile();
	printf_s("\n");
	smile();
	return 0;
}