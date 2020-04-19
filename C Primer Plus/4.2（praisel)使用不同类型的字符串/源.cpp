#include<stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];
	printf_s("What's your name?");
	scanf_s("%s", name, sizeof(name));
	printf_s("Hello,%s.%s\n", name, PRAISE);
	return 0;
}