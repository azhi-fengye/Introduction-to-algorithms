#include<stdio.h>
int main(void)
{
	float Cup,Pint,To_ffer_them,The_big_spoon,Teaspoon;//����Ʒ�ѣ���˾�������ף�����
	printf_s("please enter how many cups:");
	scanf_s("%f", &Cup);
	Pint = Cup / 2;
	To_ffer_them=Cup*8;
	The_big_spoon = To_ffer_them / 2;
	Teaspoon = The_big_spoon / 3;
	printf_s("%.1f������%.1fƷ��\n", Cup, Pint);
	printf_s("%.1f������%.1f��˾\n", Cup, To_ffer_them);
	printf_s("%.1f������%.1f������\n", Cup, The_big_spoon);
	printf_s("%.1f������%.1f����\n", Cup, Teaspoon);
	return 0;
}