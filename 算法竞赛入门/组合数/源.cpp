#include<stdio.h>
long long C(int n, int m)
{
	if (m<n-m)
	{
		m = n - m;
		long long ans = 1;
		for (int i = m+1; i <=n; i++)
		{
			ans *= i;
		}
		for (int i = 1; i <=n-m; i++)
		{
			ans /= i;
		}
		return ans;
	}
}
int main()
{
	int x, y;
	scanf_s("%d %d", &x, &y);
	int sum = C(x, y);
	printf("%d", sum);
	return 0;
}