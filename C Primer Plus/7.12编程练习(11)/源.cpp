/*ABC邮购杂货店出售的洋蓟售价为2.05美元/磅，甜菜售价为1.15美元/磅，胡萝卜售价为HULUOBO美元/磅在添加运费之前，100美元的订单有5%的打折优惠。
少于或等于5磅的订单收取6.5美元的运费和包装费，5磅~20磅的订单收取14美元的运费和包装费，超过20磅的订单在14美元的基础上每续重1磅增加0.5美元。
编写一个程序，在循环中用switch语句实现用户输入不同的字母时有不同的相应，即输入a的相应是让用户输入洋蓟的磅数，b是甜菜的磅数，c是胡萝卜的磅数，
q是退出订购。程序要记录累计的重量。即，如果用户输入4磅的甜菜，然后输入5磅的甜菜，程序应报告9磅的甜菜。然后，该程序要计算货物总价、折扣（如果有的话）、
运费和包装费。随后，程序应显示所有的购买信息：物品售价、订购的重量（单位：磅）、订购的菠菜费用、订单的总费用、折扣（如果有的话）、运费和包装费，
以及所有的费用总额。
*/
#include<stdio.h>
#define HULUOBO 1.09
#define YANGJI 2.05
#define TIANCAI 1.15
int main(void)
{
	double sum = 0, zongJia = 0, youHui = 0, yunFei = 0, tianCai = 0, tianCaiSum = 0, yangJi = 0, yangJiSum = 0, huLuoBo = 0, huLuoBoSum = 0;
	char type = 0;

	while (type != 'q')
	{
		printf_s("请选择您需要的蔬菜类型：\n");
		printf_s("(a)甜菜\t\t(b)洋蓟\t\t(c)胡萝卜\t\t（q）退出\n");
		type = getchar();
		switch (type)
		{
		case 'a':
			printf_s("请输入您需要甜菜的数量:");
			scanf_s("%lf", &tianCai);
			tianCaiSum += tianCai;
			//printf_s("您当前购买的甜菜数量是：%lf", tianCaiSum);
			break;
		case 'b':
			printf_s("请输入您需要的洋蓟的数量：");
			scanf_s("%lf", &yangJi);
			yangJiSum += yangJi;
			break;
		case 'c':
			printf_s("请输入您需要的胡萝卜的数量：");
			scanf_s("%lf", &huLuoBo);
			huLuoBoSum += huLuoBo;
			break;
		case'q':
			continue;
		}
		type = getchar();
	}
	sum = huLuoBoSum + yangJiSum + tianCaiSum;
	if (sum <= 5)
	{
		zongJia = huLuoBoSum * HULUOBO + yangJiSum * YANGJI + tianCaiSum * TIANCAI + 6.5;
		yunFei = 6.5;
	}
	else if (sum <= 20)
	{
		zongJia = huLuoBoSum * HULUOBO + yangJiSum * YANGJI + tianCaiSum * TIANCAI + 14;
		yunFei = 14;
	}
	else
	{
		zongJia = huLuoBoSum * HULUOBO + yangJiSum * YANGJI + tianCaiSum * TIANCAI + 14 + (sum - 20) * 0.5;
		yunFei = 14 + (sum - 20) * 0.5;
	}
	if (zongJia >= 100)
	{
		youHui = zongJia * 0.05;
		zongJia -= youHui;
	}
	printf_s("种类\t\t单价\t\t数量\t\t金额\n");
	printf_s("甜菜\t\t$1.15/磅\t\t%.2f\t\t%.2f\n", tianCaiSum, tianCaiSum * 1.15);
	printf_s("洋蓟\t\t$2.05/磅\t\t%.2f\t\t%.2f\n", yangJiSum, yangJiSum * 2.05);
	printf_s("胡萝卜\t\t$1.09/磅\t\t%.2f\t\t%.2f\n", huLuoBoSum, huLuoBoSum * 1.09);
	//printf_s("总价：%.2f、优惠:%,2f、运费和包装费:%.2f", zongJia, youHui,yunFei);
	printf_s("总价：%.2f、优惠：%.2f、运费和包装费：%.2f、总重量：%.2f\n", zongJia, youHui, yunFei, sum);
	return 0;
}