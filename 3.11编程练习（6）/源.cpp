#include<stdio.h>
#define A_quart_of_water 950//һ���ѵ�ˮ��Լ��050��
#define Water_molecular_mass 3e-23//һ��ˮ���ӵ�����ԼΪ3e-23
#define A_quart_of_moleculus (A_quart_of_water/Water_molecular_mass)//һ����ˮ�ķ���������һ����ˮ����������һˮ��������
int main(void)
{
	int How_quart_water;//���ٿ���ˮ
	double num_of_quart_water_molecular;//����ˮ���ܷ�����
	printf_s("How many quart  please enter:");//��������ٿ��ѣ�
	scanf_s("%d", &How_quart_water);
	num_of_quart_water_molecular = How_quart_water * A_quart_of_moleculus;
	printf_s("The number of molecules of this quart of water:%e", num_of_quart_water_molecular);//�ÿ���ˮ�ķ������ǣ�
	return 0;
}