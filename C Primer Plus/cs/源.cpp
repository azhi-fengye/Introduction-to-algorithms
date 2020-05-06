#include<stdio.h>
#include<math.h>
int main(void)
{
	int p, q, n,m,d,c;
	int e;
	scanf_s("%d", &p);
	scanf_s("%d", &q);
	scanf_s("%d", &e);
	for (d =1; d<= q * p; d++)
	{
		if ((d * e) % ((q - 1) * (p - 1)) == 1)
		{
			printf_s("d的值是:%d\n",d);
				break;
		}
	}
	while (scanf_s("%d",&m)!=EOF)
	{
		n = q * p;
		m =  pow(m, e);
		c = m % n;
		printf_s("c的值是:%d\n", c);
	}
	return 0;
}