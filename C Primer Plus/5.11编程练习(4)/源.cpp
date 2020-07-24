/*编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘米和英寸为单位显示该值，允许有小数部分。程序应该能让用户重复输入身高，直到用户输入一个非正值为止。其输出实例如下：
Enter a height in centimeters (<=0 to quit):182
182.0 cm=5 feet,11.7inches
Enter a height in centimeters (<=0 to quit):168.7
168.7 cm=5 feet,6.4 inches
Enter a height in centimeters(<=0 to quit):0
bye
*/
#include<stdio.h>
#define AFEET_TO_CM 2.54
int main(void)
{
	double height,feet,inches;
	scanf_s("%f", &height);
	while (height>0)
	{
		feet = height / AFEET_TO_CM;
	}
}