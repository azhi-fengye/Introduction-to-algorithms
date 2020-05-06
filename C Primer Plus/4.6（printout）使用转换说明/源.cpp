#include<stdio.h>
#define PI 3.14159
int main(void)
{
	int number = 7;
	float pies = 12.75;
	int cost = 7800;
	printf_s("The %d contestants ate %.2f berry pies.\n", number, pies);
	printf_s("The value of pi is %f.\n", PI);
	printf_s("Farewell!thou aret too dear for my possessing,\n");
	printf_s("%c%d\n", 's', 2 * cost);
	return 0;
}
/*
The 7 contestants ate 12.75 berry pies.7名参赛者吃了12.75个浆果派。
The value of pi is 3.141590.π的值是3.141590
Farewell!thou aret too dear for my possessing,再会！你对我来说太珍贵了，
s15600
*/