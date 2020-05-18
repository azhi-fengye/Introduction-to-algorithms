#include<stdio.h>
#define Book "War and Peacce"
int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	printf_s("This copy of \"%s\" sells for $%.2f.\nThat is %.f%% of list\n",Book,cost,percent);
	return 0;
}