/*
编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式显示用户刚输入的信息：
Dabney,you are 6.208 feet tall
使用float类型，并用/作为除号。如果你愿意，可以要求用户以厘米为单位输入身高，并以米为单位现出来。
*/
#include<stdio.h>
int main(void)
{
	float a;
	char name[20];
	printf_s("请输入您的身高（cm为单位）：\n");
	scanf_s("%f", &a);
	printf_s("请输入您的姓名：\n");
	scanf_s("%s", name,sizeof(name));
	printf_s("%s,you are %.3f feet tall.", name, a);
}