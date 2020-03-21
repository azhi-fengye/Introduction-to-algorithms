/*输出所有形同aabb的4位完全平方数*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	for  (int i= 0;;i++)
	{
		int n = i * i;
		if (n<1000)
		{
			continue;//continue作用是跳回for循环的开始。
		}
		if (n>9999)
		{
			break;//break作用是跳出循环。
		}
		int hi = n / 100;//分解出千位百位
		int lo = n % 100;//分解出百位十位
		if (hi/10==hi%10&&lo/10==lo%10)//判断千位是否等于百位以及十位等于个位
		{
			printf("%d", n);
		}
	}
	system("pause");
	return 0;
}