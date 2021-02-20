#include<stdio.h>
int main(void)
{
	int guess = 1;
	printf_s("Pick an integer from 1 to 100.I will try to guess");//从1-100中选择一个整数，我来猜猜看。
	printf_s("it.\nRespond with a y if my guess is right and with"); //如果我的猜测是对的，那就用y来形容。
	printf_s("\nan n if it is wrong,\n");//如果是错的，
	printf_s("Uh,,,is your number %d ?\n",guess); //呃，，，你的号码是% d吗？
	while (getchar()!='y')
	{
		printf_s("well.then,is it %d?\n", ++guess);//好吧，那么，是%d吗？
	}
	printf_s("I knew I could do it!\n");//我就知道我能行！
	return 0;
}