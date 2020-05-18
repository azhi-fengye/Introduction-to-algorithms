/*编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印出来。*/
#include<stdio.h>
int main(void)
{
	char ming[20], xing[20];
	printf_s("请输入您的名:\n");
	scanf_s("%s", ming,sizeof(ming));
	printf_s("请输入您的姓:\n");
	scanf_s("%s", xing,sizeof(xing));
	printf_s("“%s,%s”", ming, xing);
	return 0;
}