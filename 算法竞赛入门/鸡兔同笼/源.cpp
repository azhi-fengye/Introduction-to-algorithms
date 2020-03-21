/*输入m(脚的总数),n(头的总数),依次输出兔子和鸡的数量*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m, n, x, y;//m为脚的总和，n为头的总合，x表示鸡的数量，y表示兔子的数量
	scanf_s("%d %d", &m, &n);
	y = (4 * n - m) / 2;
	x = n - y;
	if (m/2==1||x<0||y<0)//判断条件为脚不能为单数或者鸡的数量不能为零或者兔子的数量不能为零；
	{
		printf("此题无解");
	}
	else
	{
		printf("兔子的数量为%d,鸡的数量为%d", y, x);
	}
	system("pause");
	return 0;
}