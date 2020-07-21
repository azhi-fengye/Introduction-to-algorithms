#include<stdio.h>
#include<string.h>
#include<ctype.h>
const char* MOSI[] = { "A","B","C","D","E","F","G","H",
"I","J","K","L","M","N","O","P","Q","R","X","T","U","V",
"W","S","Y","Z",".-","-...","-.-.","-..",".","..-.","--.",
"....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",
".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
int main(void)
{
	char s[5];
	int len = sizeof(MOSI) / sizeof(MOSI[0]);
	/*sizeof(MOSI)为数组的总字节数，
	sizeof(MOSI[0])为一个元素站的字节数
	(不能在函数里用，形参里的数组会退化为指针)*/
	while (scanf_s("%s", s, 5) != EOF)
	{
		for (int i = 0; i < len; i++)
		{
			int flag = 0;
			//每次循环会清零flag
			if (isalpha(s[0]) != 0)
				/*isalpha是一种函数：判断字符ch是否为英文字母，
				若为英文字母，返回非0（小写字母为2，大写字母为1）。
				若不是字母，返回0。(在头文件<ctyoe.h>中*/
			{
				_strupr_s(s);
				//_strupr_s:将字符串中的英文大写(是strupr的安全增强型)
				if (_stricmp(s, MOSI[i]) == 0)
					//_strupr_s和_stricmp都是在<string.h>中
				{
					flag = 1;
				}
				if (flag == 1)
				{
					printf_s("%s", MOSI[i + 26]);
					//如果找到则输出26个位置后的莫斯加密密码
				}
			}
			else
			{
				if (_stricmp(s, MOSI[i]) == 0)
					/* _stricmp字符串比较函数，比较字符串src和dst，但是不区分大小写，
					 大写字母会被转换为小写字母来进行比较。如："abc_" < "ABCD" ，因为 "_" < "d"。
					当源字符串大于目标字符串的时候，返回>0;
					当源字符串等于目标字符串的时候，返回=0;
					当源字符串小于目标字符串的时候，返回<0;*/
				{
					flag = 1;
				}
				if (flag == 1)
				{
					printf_s("%c", i + 39);
					//如果找到则输出当前下标距离ASCII码A的数量
				}
			}
		}
	}
	return 0;
}