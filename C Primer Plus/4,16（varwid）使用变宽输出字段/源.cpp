#include<stdio.h>
int main(void)
{
	unsigned width, precision;//��ȣ�����
	int number = 256;//����
	double weight = 242.5;//����
	printf_s("Enter a field width:\n");//�����ֶο��
	scanf_s("%d", &width);
	printf_s("The number is :%*d\n", width, number);//������
	printf_s("Now enter a width and a precision:\n");//���������Ⱥ;���
	scanf_s("%d %d", &width, &precision);
	printf_s("Weight = %*.*f\n", width, precision, weight);
	printf_s("Done!\n");// ���!
	return 0;
}