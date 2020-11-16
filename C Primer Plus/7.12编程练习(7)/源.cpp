/*编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。做出如下假设：
a,基本工资=10.00美元/小时
b.加班（超过40小时）=1.5倍的时间
c.税率：前300美元为15%
		续150美元为20%
		余下的为25%
用#define定义符号常量。不用在意是否符合当前的税法*/

#include<stdio.h>
#define BASE_WAGE 10
#define OVERTIME_WAGE 15
#define THE_FIRST_300 0.15
#define CONTINUE_TO_150 0.2
#define THE_REST_OF 0.25
int main(void) 
{
	float heure;//小时数。
	float wage;//工资。
	float tax;//税收。
	printf_s("请输入您工作的小时数:");
	scanf_s("%f", &heure);
	while (heure<0)
	{
		printf_s("您的输入有误，请重新输入：");
		scanf_s("%f", &heure);
	}
	if (heure<=40)
	{
		wage = heure * BASE_WAGE;
	}
	else
	{
		wage = 40 * BASE_WAGE + (heure - 40) * OVERTIME_WAGE;
	}
	if (wage <= 300)
	{
		tax = wage * THE_FIRST_300;
	}
	else if (wage<=450)
	{
		tax = 300 * THE_FIRST_300+((double)wage-300) * CONTINUE_TO_150;
	}
	else
	{
		tax = 330 * THE_FIRST_300 + CONTINUE_TO_150 * 150 + ((double)wage - 450) * THE_REST_OF;
	}
	printf_s("您一周工作的小时数为：%.3f,工资总额为%.3f,税金为%.3f,净收入为%.3f,",heure,wage,tax,(double)wage-tax);
	return 0;
}