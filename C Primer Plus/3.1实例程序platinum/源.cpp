#include<stdio.h>
int main(void)
{
	float weight;//你的体重
	float value;//相等总量的白金价值
	printf_s("Are you worth your weight in platinum?\n");//你的体重值白金吗?
	printf_s("Let's check it out.\n");//我们来看看
	printf_s("Please enter your weight in pounds:");//请以磅为单位输入你的体重
	/*获取用户的输入*/
	scanf_s("%f", &weight);
	/*假设白金的价格是每盅司$1700(1700是白金的市价)
	14.5833用于把英镑盅司转换成金衡盅司(13.5833是1英镑的金衡盅司数)*/
	value = 1700.0 * weight * 14.5833;
	printf_s("Your weight in platinum is worth $%.2f.\n", value);//你的体重在白金上的价值是。
	printf_s("You are easily worth that!If platinum prices drop,\n");//你很容易值这个价!如果铂金价格下跌，
	printf_s("eat more to maintain your value.\n");//多吃，保持你的价值。
	getchar();
	getchar();
	return 0;
}