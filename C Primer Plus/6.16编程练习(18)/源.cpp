/*Rabnud博士加入了一个社交圈。起初他有5个朋友。他注意到他的朋友数量以下面的方式增长，
第1周少了1个朋友，剩下的朋友数量翻倍；第2周少了2个朋友，剩下的朋友数量翻倍。一般而言，第N周少了N个朋友，剩下的朋友翻倍。
编写一个程序，计算并显示Rabnud博士每周的朋友数量。该程序一直运行，直到超过邓巴数。邓巴数是粗略估算一个人在社交圈中有稳定关系的成员的最大值，
该值大约是150。*/
#include<stdio.h>
int square_friend(int x);
int main(void)
{
	int friend_number=5;
	int count = 1;
	do
	{
		friend_number -= count;
		friend_number=2*friend_number;
		printf_s("week=%d     friend_number=%d\n", count, friend_number);
		count++;
	} while (friend_number<=150);
	return 0;
}
int square_friend(int x)
{
	return x * x;
}