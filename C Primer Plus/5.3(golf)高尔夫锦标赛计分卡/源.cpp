#include<stdio.h>
int main(void)
{
	int jane, tarzan, cheeta;
	cheeta = tarzan = jane = 68;
	printf_s("                   cheeta   tarzan    jane\n");
	printf_s("First round score  %4d %8d %8d\n", cheeta, tarzan, jane);
	return 0;
}