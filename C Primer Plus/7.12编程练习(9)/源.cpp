/*��дһ������ֻ�������������룬Ȼ����ʾ����С�ڻ���ڸ�����������*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	printf_s("������һ������������֧��������������");
	int cs;
	while (scanf_s("%d", &cs)==1&&cs>=2)
	{
		int sqrt_cs;
		for (int i = 2; i <=cs; i++)
		{
			int count = 1;
			sqrt_cs = floor(sqrt(i) + 0.5);
			for (int j = 2; j <= sqrt_cs; j++)
			{
				if (i % j == 0)
				{
					count = 0;
				}
			}
			if (count)
			{
				printf_s("%d  ", i);
			}
		}printf_s("\n");
	}
	return 0;
}