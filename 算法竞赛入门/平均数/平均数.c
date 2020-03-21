#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf_s("%d %d %d", &a, &b, &c);
    d = (a + b + c) / 3;
    printf("%d\n", d);
    return 0;
}