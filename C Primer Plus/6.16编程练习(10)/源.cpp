/*��дһ������Ҫ���û�����һ������������һ�������������������޵����޷�Χ������������ƽ���ͣ�����ʾ��������
Ȼ����������ʾ�û��������޺���������������ʾ�����ֱ���û�����������������ڻ�С����������Ϊֹ��
Enter lower and upper integer limits:5 9
The sums od the squares from 25 to 81 is 255
Enter next set of limits:3 25
The sums of the squares from 9 to 625 is 5520
Enter next set of limits:5 5
Done*/
#include<stdio.h>
int square(int x);
int main(void)
{
	int x, y;
	int lower, upper;
	printf_s("Enter lower and upper integer limits:");//�������������޺�����
	while (scanf_s("%d%d", &x, &y) == 2)
	{
		long sum = 0;
		if (x < y)
		{
			lower = x;
			upper = y;
			for (int i = lower; i <= upper; i++)
			{
				sum += square(i);
			}
			printf("The sums of the squares from %d to %d is %d\n", square(lower), square(upper), sum);
			printf_s("Enter next set of limits:");
		}
		else if (y < x)
		{
			lower = y;
			upper = x;
			for (int i = lower; i <= upper; i++)
			{
				sum += square(i);
			}
			printf("The sums of the squares from %d to %d is %d\n", square(lower), square(upper), sum);
			printf_s("Enter next set of limits:");
		}
		else
		{
			printf_s("Done");
			break;
		}
	}
	return 0;
}
int square(int x)
{
	return x * x;
}