#include<stdio.h>
int main(void)
{
	int arr[6];
	int len = sizeof arr / sizeof arr[0];
	int sum=0;
	double age = 0;
	scanf_s("%d", &arr);
	for (int i = 0; i <len; i++)
	{
		sum += arr[i];
	}
	age = sum / len;
	printf_s("%f", age);
	return 0;
}