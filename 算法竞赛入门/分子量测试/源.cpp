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
			if (isalpha(a[i + 1])||a[i + 1] == 0||i+1==n)//isalpha�ж��ַ��Ƿ�Ϊ��ĸ�����i+1λ����ĸ����i+1λ����Ϊ0����i+1Ϊ�ַ����ĺ�һλ��sum=sum+c
			{
				sum = sum + C;
			}
			else//����
			{
				x = (a[i + 1] - '0');
				for (int z = i+2;; z++)
				{
					if (isalpha(a[z])||z==n)//���²�����Ϊ�˷�ֹԪ�غ��������ʮλ��λ��
					{
						break;
					}
					if (isalpha(a[z])==0)//���isalpha(a[z])Ϊ��Ϊ��ĸ�򷵻�0.
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
			if (isalpha(a[i + 1]) || a[i + 1] == 0||i+1==n)//isalph�ж��ַ��Ƿ�Ϊ��ĸ
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