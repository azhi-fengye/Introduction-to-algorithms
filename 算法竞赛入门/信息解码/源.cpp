#include<stdio.h>
int main()
{
	int x=121;
	long g = x, k = 0;
	if (g<0)
	{
		return false;
	}
	while (g>0)
	{
		k = k * 10 + g % 10;
		g /= 10;
	}
	if (k==x)
	{
		return true;
	}
	else
	{
		return false;
	}
	return 0;
}