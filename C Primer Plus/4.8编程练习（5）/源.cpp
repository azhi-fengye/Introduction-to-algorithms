/*
编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度和以兆位（MB）为单位的文件大小。程序中应计算文件的下载时间。
注意，这里1字节等于8位。使用float类型，并用/作为除号。该程序要以下面的格式打印3个变量的值（下载速度、文件大小和下载时间），
显示小数点后面两位数字：
At 18.12 megabits per second,a file of 2.20 megabytes//在每秒18.12兆比特的速度下，一个2.20兆字节的文件
downloads in 0.97 seconds.在0.97秒内下载。
*/
#include<stdio.h>
int main(void)
{
	float download_speed,file_size,download_time;
	printf_s("请输入下载速度（MB/S）：\n");
	scanf_s("%f", &download_speed);
	printf_s("请输入文件大小（以MB）：\n");
	scanf_s("%f", &file_size);
	download_time = file_size*8/ download_speed;
	printf_s("At %.2f megabits per second,a file of %.2f megabytes downloads in %.2f seconds.", download_speed, file_size, download_time);
	return 0;
}