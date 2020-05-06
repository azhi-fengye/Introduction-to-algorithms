#include<stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;
	printf_s("num as short and unsigned short:%hd %hu\n", num, num);
	printf_s("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
	printf_s("num as int and char: %d %c\n",num,num);
	printf_s("WORDS as int,short,and char: %d %hd %c\n", WORDS, WORDS, WORDS);
	return 0;
}