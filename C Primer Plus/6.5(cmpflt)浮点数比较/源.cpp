#include<stdio.h>
#include<math.h>
int main(void)
{
	const double ANSWER = 3.14159;
	double response;
	printf_s("What is the value of pi?\n");//Բ�����Ƕ��٣�
	scanf_s("%lf", &response);
	while (fabs(response-ANSWER)>0.0001)
	{
		printf_s("Try again!\n");//����һ��
		scanf_s("%lf", &response);
	}
	printf_s("Close enough!\n");//�㹻��
	return 0;
}