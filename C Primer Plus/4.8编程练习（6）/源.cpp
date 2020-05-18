/*编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入名和姓，下一行分别打印名和姓的字母数。
字母数要与相应名和姓的结尾对齐，如下所示：
Melissa Honeybee
      7        8
接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
Melissa Honeybee
7       8*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char xing[20], ming[20];
    int ming_length,xing_length;
    printf_s("请输入您的名：\n");
    scanf_s("%s", ming,sizeof(xing));
    printf_s("请输入您的姓：\n");
    scanf_s("%s", xing,sizeof(xing));
    ming_length = strlen(ming);
    xing_length = strlen(xing);
    printf_s("%s %s\n", ming, xing);
    printf_s("%*d %*d\n", ming_length, ming_length, xing_length, xing_length);
    printf_s("%s %s\n", ming, xing);
    printf_s("%-*d %-*d\n", ming_length, ming_length, xing_length, xing_length);
    return 0;
}