#include<stdio.h>
int main(void)
{
	const float MIN = 0.0f;
	const float MAX = 100.0f;
	float score;
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	int n = 0;
	float min = MAX;
	float max = MIN;
	printf_s("Enter the first score (q to quit):");//请输入第一个分数(q退出)
	while (scanf_s("%f",&score)==1)
	{
		if (score<MIN||score>MAX)
		{
			printf_s("%0.1f is an invalid value.Try again:", score);//%0.1f是无效值。再试一次。
			continue;
		}
		printf_s("Accepting %0.1f:\n", score);//接受% 0.1 f:
		min = (score < min) ? score : min;//前面交换过后min此时为100
		max = (score > max) ? score : max;//前面交换过后max此时为0（这两步是为了求出输入数据的最大最小值）
		total += score;
		n++;
		printf_s("Enter next score (q to quit):");//输入下一个分数(q退出)
	}
	if (n>0)
	{
		printf_s("Average of %d scores is %0.1f.\n",n,total/n);//d分的平均分为%0.1f。
		printf_s("Low=%0.1f,high=%0.1f\n", min, max);// 低 = % 0.1 f, 高 = % 0.1 f
	}
	else
	{
		printf_s("No valid scores were entered.\n");//没有输入有效的分数。
	}
	return 0;
}