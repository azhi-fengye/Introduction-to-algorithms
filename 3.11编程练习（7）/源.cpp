#include<stdio.h>
#define a_inch_equivalently_CM 2.54
int main(void)
{
	float height_inch;
	float height_CM;
	printf_s("Please enter your height in incher:");//请以英尺为单位输入您的身高
	scanf_s("%f", &height_inch);
	height_CM = height_inch * a_inch_equivalently_CM;
	printf_s("Your height is in centimeters:%fcm", height_CM);//以厘米计你的身高为
	return 0;
}