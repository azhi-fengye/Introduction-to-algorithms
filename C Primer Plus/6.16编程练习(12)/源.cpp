/*考虑下面两个无限序列：
1.0+1.0/2.0+1.0/3.0+1.0/4.0+1.0/5.0+...
1.0-1.0/2.0+1.0/3.0-1.0/4.0+1.0/5.0-...
编写一个程序计算这两个无限序列的总和，直到到达某次数。提示：奇数个-1相乘得-1，偶数个-1相乘得1。
让用户交互地输入指定的次数，当用户输入0或负值时结束输入。查看运行100项、1000项、10000项后的总和，
是否发现每个序列都收敛于某值？*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int number;
	double num1=0,num2=0;
	printf_s("请输入将要计算的次数:");
	while (scanf_s("%d",&number)==1)
	{
		if (number <= 0)
		{
			printf_s("您输入的值有误.");
			break;
		}
		for (float i = 1.0; i < number; i++)
		{
			num1 += 1.0 / i;
			num2 += 1.0 / (i * (double)pow(-1, i + 1.0));
		}
		printf_s("%d次计算后的结果是:%f,%f\n", number, num1,num2);
		num1 = 0;
		num2 = 0;
	}
	return 0;
}