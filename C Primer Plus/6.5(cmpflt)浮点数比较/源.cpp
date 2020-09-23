#include<stdio.h>
#include<math.h>
int main(void)
{
	const double ANSWER = 3.14159;
	double response;
	printf_s("What is the value of pi?\n");//圆周率是多少？
	scanf_s("%lf", &response);
	while (fabs(response-ANSWER)>0.0001)
	{
		printf_s("Try again!\n");//再来一次
		scanf_s("%lf", &response);
	}
	printf_s("Close enough!\n");//足够近
	return 0;
}