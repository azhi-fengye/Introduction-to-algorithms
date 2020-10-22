/*使用嵌套循环，按下面的格式打印字母：
* F
* FE
* FED
* FEDC
* FEDCB
* FEDCBA
* 注意：如果你的系统不使用ASCII或其他以数字顺序编码的代码，可以把字符数组初始化为字母表中的字母：
* char lets[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
* 然后用数组下标选择单独的字母，例如lets[0]是'A',等等。
*/
#include<stdio.h>
int main(void)
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf_s("%c", 70 - j);
		}
		printf_s("\n");
	}
	return 0;
}