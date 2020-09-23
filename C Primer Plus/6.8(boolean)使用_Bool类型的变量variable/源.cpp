#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	long num;
	long sum = 0L;
	bool input_is_good;
	printf_s("Please enter an integer to be summed");
	printf_s("(q to quit):");
	input_is_good =scanf_s("%ld", &num);
	while (input_is_good)
	{
		sum = sum + num;
		printf_s("Please enter next integer (q to quit):");
		input_is_good = scanf_s("%ld", &num);
	}
	printf_s("Those integers sum to %ld.\n", sum);
	return 0;
}