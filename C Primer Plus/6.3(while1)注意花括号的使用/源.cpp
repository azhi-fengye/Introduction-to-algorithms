#include<stdio.h>
int main(void)
{
	int n = 0;
	while (n < 3)
		printf("n is %d\n", n);
		n++;
		printf_s("That's all this program does\n");
		return 0;
}

//反面教材 没有注意花括号的使用创建了一个无限循环