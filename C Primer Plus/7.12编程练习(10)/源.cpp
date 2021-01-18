/*1988年的美国联邦税收计划是近代最简单的税收方案，它分为4个类别，每个类别有两个等级。
下面是该税收计划的摘要（美元数为应征税的收入）；
类别					税金
单身					17850美元按15%计，超出部分按28%计
户主					23900美元按15%计，超出部分按28%计
已婚，共有				29700美元按15%计，超出部分按28%计
已婚，离异				14875美元按15%计，超出部分按28%计
例如，一位工资为20000美元的单身纳税人，应缴纳税费0.15*17850+0.28*（20000-17850）美元。
编写一个程序，让用户指定缴纳税金的种类和应纳税收入，然后计算税金。程序应通过循环让用户可以多次输入。*/
#include<stdio.h>
#include<stdbool.h>
#define NO_OVER_TAX  0.25//未超出部分的税率
#define OVER_TAX 0.28//超出部分的税率
#define SINGLE_STANDARD 17850//单身类别的税金标准
#define HOUSEHOLDER_STANDARD 23900//户主类别的税金标准；
#define MARRIED_STANDARD 29700//已婚，共有类别的税金标准；
#define MARRIED_OVER_STANDARD 14875//已婚，离异类别的税金标准；
int screen(void)
{
	
	printf_s("类别\t\t\t\t\t税金\n");
	printf_s("a:单身\t\t\t\t\t17850美元按15%%计，超出部分按28%%计\n");
	printf_s("b:户主\t\t\t\t\t23900美元按15%%计，超出部分按28%%计\n");
	printf_s("c:已婚，共有\t\t\t\t29700美元按15%%计，超出部分按28%%计\n");
	printf_s("d:已婚，离异\t\t\t\t14875美元按15%%计，超出部分按28%%计\n");
	printf_s("请选择您的类别:\n");
	return 0;
}
int main(void)
{
	char type[5] = {0};
	double income;
	bool cookie = true;
	while (cookie)
	{
		screen();
		scanf_s("%s",type,2);
		printf_s("请输入您的收入：\n");
		scanf_s("%lf", &income);
		switch (type[0])
		{
		case 'a':
			//cookie = false;
			if (income <= SINGLE_STANDARD)
			{
				printf_s("%.2lf\n", income - (income * 0.15));
			}
			else {
				printf_s("%.2lf\n", ((SINGLE_STANDARD * 0.15) + (income - SINGLE_STANDARD) * 0.28));
			}
			break;
		case'b':
			//cookie = false;
			if (income <= HOUSEHOLDER_STANDARD)
			{
				printf_s("%.2lf\n", income - (income * 0.15));
			}
			else {
				printf_s("%.2lf\n", ((HOUSEHOLDER_STANDARD * 0.15) + (income - HOUSEHOLDER_STANDARD) * 0.28));
			}
			break;
		case'c':
			//cookie = false;
			if (income <= MARRIED_STANDARD)
			{
				printf_s("%.2lf\n", income - (income * 0.15));
			}
			else {
				printf_s("%.2lf\n", ((MARRIED_STANDARD * 0.15) + (income - MARRIED_STANDARD) * 0.28));
			}
			break;
		case'd':
			//cookie = false;
			if (income <= MARRIED_OVER_STANDARD)
			{
				printf_s("%.2lf\n", income - (income * 0.15));
			}
			else {
				printf_s("%.2lf\n", ((MARRIED_OVER_STANDARD * 0.15) + (income - MARRIED_OVER_STANDARD) * 0.28));
			}
			break;
		default:
			//cookie = false;
			printf_s("您输入的类型有误\n");
			break;
		}
	}
	return 0;
}