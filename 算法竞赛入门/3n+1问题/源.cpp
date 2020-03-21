/*输入一个n，如果n为奇数则n=3n+1；否则变为n的一半。经过若干次这样的变换，一定会使n变为1*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n2, count = 0;
	scanf_s("%d", &n2);
	long long n = n2;
	while (n>1)
	{
		if (n % 2 == 1)
		{
			n = 3 * n + 1;
		}
		else
		{
			n = n / 2;
		}
		count++;
	}
	printf("%d", count);
	return 0;
}