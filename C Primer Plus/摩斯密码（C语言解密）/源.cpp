#include<stdio.h>
#include<string.h>
#include<ctype.h>
const char* MOSI[] = { "A","B","C","D","E","F","G","H",
"I","J","K","L","M","N","O","P","Q","R","X","T","U","V",
"W","S","Y","Z",".-","-...","-.-.","-..",".","..-.","--.",
"....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",
".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
int main(void)
{
	char s[5];
	int len = sizeof(MOSI) / sizeof(MOSI[0]);
	while (scanf_s("%s", s, 5) != EOF)
	{
		for (int i = 0; i < len; i++)
		{
			int flag = 0;
			if (isalpha(s[0]) != 0)
			{
				_strupr_s(s);
				if (_stricmp(s, MOSI[i]) == 0)
				{
					flag = 1;
				}
				if (flag == 1)
				{
					printf_s("%s", MOSI[i + 26]);
				}
			}
			else
			{
				if (_stricmp(s, MOSI[i]) == 0)
				{
					flag = 1;
				}
				if (flag == 1)
				{
					printf_s("%c", i + 39);
				}
			}
		}
	}
	return 0;
}