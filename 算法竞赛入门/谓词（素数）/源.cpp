#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	if (n<=1)
	{
		return 0;
	}
	int m = floor(sqrt(n) + 0.5);
	for (int i = 2; i <=m; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
		return 1;
	}
}
int main()
{
	int n;
	scanf_s("%d", &n);
	if (is_prime(n)) 
	{
		printf("����һ������");
	}
	else
	{
		printf("�ⲻ��һ������");
	}
	return 0;
}