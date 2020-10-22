/*编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母：
	A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
打印这样的图形，要根据用户输入的字母来决定。例如，上面的图形是在用户输入E后的打印结果。
提示：用外层循环处理行，每行使用3个内层循环，分别处理空格、以升序打印字母、以降序打印字母。
如果系统不使用ASCII或其他以数字顺序编码的代码，请参照练习3的解决方案。
*/
#include<stdio.h>
int main(void)
{
	char ch;
	printf_s("请输入一个大写字母：");
	scanf_s("%c", &ch, sizeof(ch));
	int ch_length = ch - 65 + 1;//假设输入的为C，ch_length为3，
	for (int i = 0; i < ch_length; i++)//控制打印行数
	{
		char a = 'A';
		for (int j = 0; j < (ch_length - i - 1); j++)//第一行应打印行数减1个空格，由于循环是由0开始，所以需要减去1。
		{
			printf_s(" ");
		}
		for (int x = 0; x <= i; x++)//小于等于i。因为这个循环控制升序打印的终点。
		{
			printf_s("%c", a++);
		}
		a--;//因为前一个循环结束时使a又加了一次1，所以此时需要减去这个1。
		for (int y = 0; y < i; y++)//如题这个降序打印需要是倒序打印刚才的字母，终点出现一次就可以了，所以小于i。
		{
			printf_s("%c", --a);
		}
		printf_s("\n");
	}
	return 0;
}