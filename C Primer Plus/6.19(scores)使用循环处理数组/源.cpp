#include<stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;
	printf_s("Enter %d golf scores:\n", SIZE);
	for (index = 0; index < SIZE; index++)
	{
		scanf_s("%d", &score[index], SIZE);//Ҫ��Ӻ���������С
	}
	printf_s("The scores read in are as follows:\n");
	for (index = 0; index < SIZE; index++)
	{
		printf_s("%5d", score[index]);
	}
	printf_s("\n");
	for (index = 0; index < SIZE; index++)
	{
		sum += score[index];
	}
	average = (float)sum / SIZE;
	printf_s("Sum of scores = %d,average = %.2f\n", sum, average);
	printf_s("That's a handicap of %.0f.\n", (double)average - PAR);
	return 0;
}