/*����һ��n�����nΪ������n=3n+1�������Ϊn��һ�롣�������ɴ������ı任��һ����ʹn��Ϊ1*/
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