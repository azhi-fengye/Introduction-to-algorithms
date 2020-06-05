#include<stdio.h>
#define SEC_PER_MIN 60//sec:second(秒),min:minute(分)
int main(void)
{
	int sec, min, left;
	printf_s("Convert seconds to minutes and seaconds!\n");//转换秒到分钟和秒!
	printf_s("Enter the number of seconds (<=0 to quit):\n");//输入秒数(<=0退出)
	scanf_s("%d", &sec);
	while (sec>0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf_s("%d seconds is %d minutes,%d seconds.\n", sec, min, left);//%d秒是%d分钟，%d秒。
		printf_s("Enter new value(<=0 to quit):\n");//输入新值（<=0表示退出）:
		scanf_s("%d", &sec);
	}
	return 0;
}