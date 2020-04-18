#include<stdio.h>
int main(void)
{
    float ch;
    printf_s("Enter a floating-poing value:");//输入浮点值
    scanf_s("%f",&ch);
    printf_s("fixed-point notation:%f\n", ch);//定点记数法
    printf_s("exponential notation:%e\n", ch);//指数计数法
    printf_s("p notation:%.2a", ch);//p计数法
    return 0;
}