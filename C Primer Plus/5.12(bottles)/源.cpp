#include<stdio.h>
#define MAX 100
int main(void)
{
	int count = MAX + 1;
	while (--count > 0)
	{
		printf_s("%d bottles of spring water on the wall,"//墙上挂着几瓶矿泉水，
			"%d bottles of spring water!\n", count, count);//%d瓶装矿泉水!
		printf_s("Take one down and pass it around,\n");
		printf_s("%d bottles of spring water!\n\n", count - 1);
	}
	return 0;
}