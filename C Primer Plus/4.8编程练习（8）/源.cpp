/*
编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数，显示小数点后一位数字。
接下来，使用1加仑大约3.785升，1英里大约为1.609千米，把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料消耗表示法），
并显示结果，显示小数点后面1位数字。注意，美国采用的方案测量消耗单位燃料的过程（值越大越好），而欧洲则采用单位距离消耗
的燃料测量方案（值越低越好）。使用#define创建符号常量或使用const限定符创建变量来表示两个转换系数。
*/
#include<stdio.h>
#define A_mile_kilometer 1.609
#define A_gallon_litre 3.785
int main(void)
{
	double mileage, value_gasoline;
	printf_s("请输入旅行的里程(英里)：\n");
	scanf_s("%f", &mileage);
	printf_s("请输入消耗的汽油量（加仑）：\n");
	scanf_s("%f", &value_gasoline);

}