/*4.15（input）何时使用&*/
#include<stdio.h>
int main(void)
{
	int age;
	float assets;
	char pet[30];
	printf_s("Enter your age,assets,and favorite pet.\n");
	scanf_s("%d %f", &age, &assets);
	scanf_s("%s", &pet,30);
	printf("%d $%.2f %s \n", age, assets, pet);
	return 0;
}