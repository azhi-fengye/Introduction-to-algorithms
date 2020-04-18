#include<stdio.h>
int main(void)
{
	float Cup,Pint,To_ffer_them,The_big_spoon,Teaspoon;//杯，品脱，盅司，大汤勺，茶勺
	printf_s("please enter how many cups:");
	scanf_s("%f", &Cup);
	Pint = Cup / 2;
	To_ffer_them=Cup*8;
	The_big_spoon = To_ffer_them / 2;
	Teaspoon = The_big_spoon / 3;
	printf_s("%.1f杯等于%.1f品脱\n", Cup, Pint);
	printf_s("%.1f杯等于%.1f盅司\n", Cup, To_ffer_them);
	printf_s("%.1f杯等于%.1f大汤勺\n", Cup, The_big_spoon);
	printf_s("%.1f杯等于%.1f茶勺\n", Cup, Teaspoon);
	return 0;
}