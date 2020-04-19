#include<stdio.h>
#include<string.h>
#define DENSITY 62.4//人体密度（单位：磅/立方英尺）
int main()
{
	double weight, volume;//重量，体积
	int size, letters;//大小，字母
	char name[40];//name是一个可以容纳40个字符的数组
	printf_s("Hi! What's your first name?\n");//嗨！你叫什么名字？
	scanf_s("%s",&name,sizeof(name));//与书上不一样是因为scanf_s需要为每个占位符提供两个参数，一个用于提供要写入的地址，另一个用于提供第一个的大小
	printf_s("%s,what's your werght in pounds?\n", name);//你的体重是多少?
	scanf_s("%lf", &weight);//double类型的输入转换符得使用lf
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf_s("Well,%s,your volue is %2.2f cubic feet.\n", name, volume);//嗯，name，你的体积是%2.2f立方英尺。
	printf_s("Also,your first name has %d letters,\n", letters);//而且，你的名字有%d字母。
	printf_s("and we have %d bytes to store it.\n", size);//我们有%d字节来储存它。
	return 0;
}
/*分别输入christine和154:
Hi! What's your first name?
christine
christine,what's your werght in pounds?
154
Well,christine,your volue is 2.47 cubic feet.
Also,your first name has 9 letters,
and we have 40 bytes to store it.
*/