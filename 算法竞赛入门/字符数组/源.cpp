#include<stdio.h>
#include<string.h>
int main()
{
	char s[20] = {}, buf[99];
	int count = 0;
	scanf_s("%s", &s, 20);
	for (int abc = 100; abc <= 999; abc++)
	{
		for (int de = 10; de <= 99; de++)
		{
			int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
			sprintf_s(buf, "%d%d%d%d%d", abc, de, x, y, z);//sprintf������ַ���buf
			int ok = 1;
			for (int i = 0; i < strlen(buf); i++)
			{
				if (strchr(s, buf[i]) == NULL)//strchar������ͷ�ļ�string.h���������˼����s������buf[i]����ҵ�û�еĻ���ok=0��
				{
					ok = 0;
				}
			}
				if (ok)
				{
					printf("<%d>\n", ++count);
					printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
				}
		}
	}
	printf("The number of solutions=%d\n", count);
	return 0;
}
