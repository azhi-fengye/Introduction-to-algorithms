#include<stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int status;
	printf_s("Please enter an integer to be summed ");//������һ�����������
	printf_s("(q to quit):");
	status = scanf_s("%ld", &num);
	while ( 1==status)
	{
		sum = sum + num;
		printf_s("Please enter next integer (q to quit): ");
		status = scanf_s("%ld", &num);
	}
	printf_s("Those integers sum to %ld.\n", sum);//��Щ�����ĺ�Ϊ
	return 0;
}