#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	FILE* fp;
	char fname[50] = {0};
	errno_t err;
	printf_s("Enter the name of the file:"); //输入文件名
	scanf_s("%s", fname, 49);//打开待读取文件；
	err = fopen_s(&fp,fname, "r");//如果失败
	if (fp == NULL)
	{
		printf_s("failed to open file.bye\n");//打开文件失败，再见
		exit(1);
	}
	while ((ch=getc(fp))!=EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	return 0;
}