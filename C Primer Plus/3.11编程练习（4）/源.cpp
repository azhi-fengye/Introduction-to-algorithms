#include<stdio.h>
int main(void)
{
    float ch;
    printf_s("Enter a floating-poing value:");//���븡��ֵ
    scanf_s("%f",&ch);
    printf_s("fixed-point notation:%f\n", ch);//���������
    printf_s("exponential notation:%e\n", ch);//ָ��������
    printf_s("p notation:%.2a", ch);//p������
    return 0;
}