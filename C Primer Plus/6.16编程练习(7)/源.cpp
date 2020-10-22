/*编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。提示strlen()函数（第4章介绍过）可用于计算数组最后一个字符的下标*/
#include<stdio.h>
#include<string.h>
#define WORDLENGTH 20
int main(void)
{
	char word[WORDLENGTH];
	word[WORDLENGTH - 1] = { 0 };
	printf_s("请输入一个单词：\n程序将会倒序打印该单词：");
	scanf_s("%s", word, WORDLENGTH);
	for (int i = strlen(word)-1; i >=0; i--)
	{
		printf_s("%c",word[i]);
	}
	return 0;
}