#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];
	printf_s("What's your name?");//你的名字是？
	scanf_s("%s", &name, sizeof(name));
	printf_s("Hello,%s.%s \n", name, PRAISE);//你好，name，你是一个非凡的存在
	printf_s("Your name of %zd letters occupies %zd memory cells.\n",
		strlen(name), sizeof (name));//您的%zd个字母的名称占用了%zd个内存单元。
	printf_s("The phrase of praise has %zd letters",
		strlen(PRAISE));//这句赞美的话有%zd个字母
	return 0;
}