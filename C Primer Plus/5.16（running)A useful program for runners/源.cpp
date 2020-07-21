/*一个有用的程序*/
#include<stdio.h>
const int S_PER_M = 60;//一分钟的秒数
const int S_PER_H = 3600;//一小时的秒数
const double M_PER_K = 0.62137;//一公里的英里数
int main(void)
{
	double distk, distm;//跑过的距离(分别以公里和英里为单位)
	double rate;//平均速度(以英里/小时为单位)
	int min, sec;//跑步用时(以分钟和秒为单位)
	int time;//跑步用时(以秒为单位)
	double mtime;//跑1英里需要的时间,以秒为单位
	int mmin, msec;//跑1英里需要的时间,以分钟和秒为单位
	printf_s("This program converts your time for a metric race\n");//这个程序转换你的时间进行公制比赛
	printf_s("to a time for running a mile and to your average\n");//一英里的跑步时间和你的平均成绩
	printf_s("speed in miles per hour.\n");//速度的单位是英里每小时。
	printf_s("Please enter,in kilometers,the distance run.\n");//请输入，以公里为单位，即长跑。
	scanf_s("%lf", &distk);//%lf表示一个double的值
	printf_s("Next enter the time in minutes and seconds.\n");//接下来输入以分钟和秒为单位的时间。
	printf_s("Begin by entering the minutes.\n");//从输入分钟开始
	scanf_s("%d", &min);
	printf_s("Now enter the seconds.\n");//现在输入秒数。
	scanf_s("%d", &sec);
	time = S_PER_M * min + sec;//把时间转换成秒
	distm = M_PER_K * distk;//把公里转换成英里
	rate = distm / time * S_PER_H;//英里/秒*秒/小时=英里/小时
	mtime = (double)time / distm;//时间/距离=跑1英里所用的时间
	mmin = (int)mtime / S_PER_M;//求出分钟数
	msec = (int)mtime % S_PER_M;//求出剩余的秒数
	printf_s("You ran %1.2f km(%1.2f miles) in %d min,%d sec.\n",distk,distk,min,sec);//You ran %1.2fkm(%1.2f miles) in %dmin,%dsec.你在%d分%d秒内跑了%1.2f公里（%1.2f英里）
	printf_s("That pace corresponds to running a mile in %d min,", mmin);//这个速度相当于在%d分内跑一英里，
	printf_s("%d sec.\nYour average speed was %1.2f mph.\n", msec, rate);//%d秒.你的平均速度为%1.2fmph."
	return 0;
}