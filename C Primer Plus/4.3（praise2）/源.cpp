#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being."//�����Ǹ��˲�����ˡ�
int main(void)
{
	char name[40];
	printf_s("What's your name?");//���ʲô����
	scanf_s("%s", &name, sizeof(name));
	printf_s("Hello,%s.%s \n", name, PRAISE);//Hello��name�������Ǹ��˲������
	printf_s("Your name of %zd letters occupies %zd memory cells.\n",
		strlen(name), sizeof(name));//����%zd����ĸռ����%zd���ڴ浥Ԫ
	printf_s("The phrase of praise has %zd letters",
		strlen(PRAISE));//��������Ļ���%zd����ĸ
	return 0;
}