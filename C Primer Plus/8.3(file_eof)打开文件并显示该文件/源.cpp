#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	FILE* fp;
	char fname[50] = {0};
	errno_t err;
	printf_s("Enter the name of the file:"); //�����ļ���
	scanf_s("%s", fname, 49);//�򿪴���ȡ�ļ���
	err = fopen_s(&fp,fname, "r");//���ʧ��
	if (fp == NULL)
	{
		printf_s("failed to open file.bye\n");//���ļ�ʧ�ܣ��ټ�
		exit(1);
	}
	while ((ch=getc(fp))!=EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	return 0;
}