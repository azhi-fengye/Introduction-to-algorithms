#include<stdio.h>
int main(void)
{
	printf_s("integer division: 5/4 is %d \n", 5 / 4); //integer division（整数除法）
	printf_s("integer division: 6/3 is %d \n", 6 / 3);//整数除法会截断计算结果的小数部分
	printf_s("integer division: 7/4 is %d \n", 7 / 4);//（丢弃整个小数部分）不会四舍五入结果
	printf_s("floating division: 7./4 is %1.2f \n", 7. / 4);//floating division（浮点除法）
	printf_s("mixed division:   7./4 is %1.2f \n", 7. / 4);//mixed division（混合除法）
	return 0;
}