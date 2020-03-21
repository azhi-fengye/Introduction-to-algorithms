#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define maxn 20
#define C 12.01
#define O 16.00
#define H 1.008
#define N 14.01
char a[maxn];
int main()
{
	scanf_s("%s", a, 20);
	int n = strlen(a),x=0,y=0;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 'C')
		{
			if (isalpha(a[i + 1])||a[i + 1] == 0||i+1==n)//isalpha判断字符是否为字母；如果i+1位是字母或者i+1位的数为0或者i+1为字符串的后一位则sum=sum+c
			{
				sum = sum + C;
			}
			else//否则
			{
				x = (a[i + 1] - '0');
				for (int z = i+2;; z++)
				{
					if (isalpha(a[z])||z==n)//以下部分是为了防止元素后面跟的是十位百位数
					{
						break;
					}
					if (isalpha(a[z])==0)//如果isalpha(a[z])为不为字母则返回0.
					{
						y = (a[z] - '0');
						y = y + x * 10;
						x = y;
					}
				}
				sum = sum + x * C;
			}
		}
		if (a[i] == 'H')
		{
			if (isalpha(a[i + 1]) || a[i + 1] == 0||i+1==n)
			{
				sum = sum + H;
			}
			else
			{
				x = (a[i + 1] - '0');
				for (int z = i + 2;; z++)
				{
					if (isalpha(a[z]) || z == n)
					{
						break;
					}
					if (isalpha(a[z]) == 0)
					{
						y = (a[z] - '0');
						y = y + x * 10;
						x = y;
					}
				}
				sum = sum + x * H;
			}
		}
		if (a[i] == 'O')
		{
			if (isalpha(a[i + 1]) || a[i + 1] == 0||i+1==n)//isalph判断字符是否为字母
			{
				sum = sum +O;
			}
			else
			{
				x = (a[i + 1] - '0');
				for (int z = i + 2;; z++)
				{
					if (isalpha(a[z]) || z == n)
					{
						break;
					}
					if (isalpha(a[z]) == 0)
					{
						y = (a[z] - '0');
						y = y + x * 10;
						x = y;
					}
				}
				sum = sum + x * O;
			}
		}
		if (a[i] == 'N')
		{
			if (isalpha(a[i + 1]) || a[i + 1] == 0||i+1==n)
			{
				sum = sum + N;
			}
			else
			{
				x = (a[i + 1] - '0');
				for (int z = i + 2;; z++)
				{
					if (isalpha(a[z]) || z == n)
					{
						break;
					}
					if (isalpha(a[z]) == 0)
					{
						y = (a[z] - '0');
						y = y + x * 10;
						x = y;
					}
				}
				sum = sum + x * N;
			}
		}
	}
	printf("%.3f", sum);
	return 0;
}