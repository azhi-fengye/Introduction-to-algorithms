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
The 7 contestants ate 12.75 berry pies.7�������߳���12.75�������ɡ�
The value of pi is 3.141590.�е�ֵ��3.141590
Farewell!thou aret too dear for my possessing,�ٻᣡ�������˵̫����ˣ�
s15600
*/