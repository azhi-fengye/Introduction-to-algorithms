#include<stdio.h>
#define COVERAGE 350
int main(void)
{
	int sq_feet;//平方英尺
	int cans;//罐
	printf_s("Enter number of square feet to be painted:\n");//输入需要绘制的平方英尺数
	while (scanf_s("%d",&sq_feet)==1)//输入需要粉刷的面积
	{
		cans = sq_feet / COVERAGE;//因为cans是int整数类型，后面未除清的小数会被截断。
		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;//判断是否能用一罐油漆取余 不能的话在cans的基础上＋1.
		printf_s("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");//你需要%d罐油漆.
		printf_s("Enter next value (q to quit):\n");//输入一个新的值（q退出）
	}
	return 0;
}