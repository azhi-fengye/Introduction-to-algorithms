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
	printf_s("Enter the first score (q to quit):");//�������һ������(q�˳�)
	while (scanf_s("%f",&score)==1)
	{
		if (score<MIN||score>MAX)
		{
			printf_s("%0.1f is an invalid value.Try again:", score);//%0.1f����Чֵ������һ�Ρ�
			continue;
		}
		printf_s("Accepting %0.1f:\n", score);//����% 0.1 f:
		min = (score < min) ? score : min;//ǰ�潻������min��ʱΪ100
		max = (score > max) ? score : max;//ǰ�潻������max��ʱΪ0����������Ϊ������������ݵ������Сֵ��
		total += score;
		n++;
		printf_s("Enter next score (q to quit):");//������һ������(q�˳�)
	}
	if (n>0)
	{
		printf_s("Average of %d scores is %0.1f.\n",n,total/n);//d�ֵ�ƽ����Ϊ%0.1f��
		printf_s("Low=%0.1f,high=%0.1f\n", min, max);// �� = % 0.1 f, �� = % 0.1 f
	}
	else
	{
		printf_s("No valid scores were entered.\n");//û��������Ч�ķ�����
	}
	return 0;
}