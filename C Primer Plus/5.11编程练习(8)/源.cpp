/*编写一个程序，显示求模运算的结果。把用户输入的第1个整数作为求模运算符的第2个运算对象，
该数在运算过程中保持不变。用户后面输入的数是第1个运算对象。当用户输入一个非正值时，
程序结束。其输出示例如下：
This program computes moduli.//这个程序计算模。
Enter an integer to serve as the second operand:256//输入一个整数作为第二个操作数:
Now enter the first operand:438//现在输入第一个操作数:
438 % 256 is 182
Enter next number for first operand (<=0 to quit):1234567/输入第一个操作数的下一个数字(<=0退出):
1234567 % 256 is 135
Enter next number for first operand (<=0 to quit):0//输入第一个操作数的下一个数字(<=0退出):
Done*/
#include<stdio.h>
int main(void)
{
	printf_s("This program conputes moduli.");
	int mod1, mod2,left;
	printf_s("Enter an integer to serve ad the second operand:");
	scanf_s("%d", &mod2);
	while (mod2>0)
	{
		printf_s("Now enter the first operand:");
		scanf_s("%d", &mod1);
		while (mod1>0)
		{
			left = mod1 % mod2;
			printf_s("%d %% %d is %d\n", mod1, mod2, left);
			printf_s("Enter next number for first operand (<=0 to quit):");
			scanf_s("%d", &mod1);
		}
		printf_s("Done");
		return 0;
	}
}