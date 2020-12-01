/*修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使用switch完成工资等级选择。
运行程序后，显示的菜单应该类似这样：
******************************************************************
Eenter the number corresponding to the desired pay rate or action:
(输入与期望的支付率或操作相对应的数字)
1)$8.75/hr                           2)$9.33/hr
3)$10.00/hr                          4)$11.20/hr
5)quit
******************************************************************
如果选择1~4其中的一个数字，程序应该询问用户工作的小时数。程序要通过循环运行，除非用户输入5。
如果输入1~5以外的数字，程序应提醒用户输入正确的选项，然后再重复显示菜单提示用户输入。
使用#define创建符号常量表示各工资等级和税率。*/
#include<stdio.h>
#include<stdbool.h>
#define PAY_RATE1 8.75
#define PAY_RATE2 9.33
#define PAY_RATE3 10.00
#define PAY_RATE4 11.20
#define TIME_BASE 40
#define OVERTIME_PAY 1.5
#define BREAK1 300
#define BREAK2 450
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
int main(void)
{
	int heure, option;
	double wage, tax, PAY_RATE = 0;
	bool iswhile_out = false;
	printf_s("******************************************************************\n");
	printf_s("Eenter the number corresponding to the desired pay rate or action:\n");
	printf_s("(输入与期望的支付率或操作相对应的数字)\n");
	printf_s("1)$8.75 / hr                           2)$9.33 / hr\n");
	printf_s("3)$10.00 / hr                          4)$11.20 / hr\n");
	printf_s("5）quit\n");
	printf_s("******************************************************************\n");
	while ((scanf_s("%d", &option) == 1))
	{
		iswhile_out = true;
		switch (option)
		{
		case 1:PAY_RATE = PAY_RATE1;
			printf_s("当前您的工资挡位为：%.2f", PAY_RATE);
			break;
		case 2:PAY_RATE = PAY_RATE2;
			printf_s("当前您的工资挡位为：%.2f", PAY_RATE);
			break;
		case 3:PAY_RATE = PAY_RATE3;
			printf_s("当前您的工资挡位为：%.2f", PAY_RATE);
			break;
		case 4:PAY_RATE = PAY_RATE4;
			printf_s("当前您的工资挡位为：%.2f", PAY_RATE);
			break;
		case 5:
			break;
		default:
			printf_s("您的输入有误请重新输入");
			printf_s("******************************************************************\n");
			printf_s("Eenter the number corresponding to the desired pay rate or action:\n");
			printf_s("(输入与期望的支付率或操作相对应的数字)\n");
			printf_s("1)$8.75/hr                           2)$9.33/hr\n");
			printf_s("3)$10.00/hr                          4)$11.20/hr\n");
			printf_s("5）quit\n");
			printf_s("******************************************************************\n");
			iswhile_out = false;
			break;
		}
		if (iswhile_out)
		{
			break;
		}
	}
	printf_s("请输入您一周工作的小时数:");
	scanf_s("%d", &heure);
	if (heure > TIME_BASE)
	{
		wage = ((TIME_BASE * PAY_RATE)) + ((double)heure - TIME_BASE) * PAY_RATE * OVERTIME_PAY;
	}
	else
	{
		wage = heure * PAY_RATE;
	}
	if (wage <= 300)
	{
		tax = wage * RATE1;
	}
	else if (wage <= 450)
	{
		tax = (300 * RATE1) + (wage - 300) * RATE2;
	}
	else if (wage > 450);
	{
		tax = (300 * RATE1) + (150 * RATE2) + (wage - 450) * RATE3;
	}
	printf_s("******************************************************************\n");
	printf_s("\t\t小时数\t\t总工资\t\t税收\t\t净收入\t\n");
	printf_s("一周工作\t%d\t\t%.3f\t\t%.3f\t\t%.3f", heure, wage, tax, wage - tax);
	return 0;
}