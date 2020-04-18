#include<stdio.h>
#define A_quart_of_water 950//一夸脱的水大约是050克
#define Water_molecular_mass 3e-23//一个水分子的质量约为3e-23
#define A_quart_of_moleculus (A_quart_of_water/Water_molecular_mass)//一夸脱水的分子数等于一夸脱水的质量除以一水分子质量
int main(void)
{
	int How_quart_water;//多少夸脱水
	double num_of_quart_water_molecular;//夸脱水的总分子数
	printf_s("How many quart  please enter:");//请输入多少夸脱：
	scanf_s("%d", &How_quart_water);
	num_of_quart_water_molecular = How_quart_water * A_quart_of_moleculus;
	printf_s("The number of molecules of this quart of water:%e", num_of_quart_water_molecular);//该夸脱水的分子数是：
	return 0;
}