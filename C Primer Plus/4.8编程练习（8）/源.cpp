/*
��дһ��������ʾ�û��������е���̺����ĵ���������Ȼ����㲢��ʾ����ÿ����������ʻ��Ӣ��������ʾС�����һλ���֡�
��������ʹ��1���ش�Լ3.785����1Ӣ���ԼΪ1.609ǧ�ף��ѵ�λ��Ӣ��/���ص�ֵת��Ϊ��/100���ŷ��ͨ�õ�ȼ�����ı�ʾ������
����ʾ�������ʾС�������1λ���֡�ע�⣬�������õķ����������ĵ�λȼ�ϵĹ��̣�ֵԽ��Խ�ã�����ŷ������õ�λ��������
��ȼ�ϲ���������ֵԽ��Խ�ã���ʹ��#define�������ų�����ʹ��const�޶���������������ʾ����ת��ϵ����
*/
#include<stdio.h>
#define A_mile_kilometer 1.609 //ÿӢ�����1.609ǧ��
#define A_gallon_litre 3.785 //ÿ���ص���3.785��
int main(void)
{
	double Mileage, Value_gasoline, Miles_per_gallon,Km_mileage, Litre_gasoline_gallon,A_Km_Litre;
	/*
	mileage:Ӣ�value_gasoline:��������Mile_per_gallon:ÿ�����ߵ�Ӣ������;
	Km_mileage:�����ǧ���㣻Litre_gasoline_gallon:���ĵ�����������.
	*/
	printf_s("���������е����(Ӣ��)��\n");
	scanf_s("%lf", &Mileage);
	printf_s("���������ĵ������������أ���\n");
	scanf_s("%lf", &Value_gasoline);
	Km_mileage = A_mile_kilometer * Mileage;
	Litre_gasoline_gallon = Value_gasoline * A_gallon_litre;
	Miles_per_gallon=Mileage/ Value_gasoline;
	A_Km_Litre =Litre_gasoline_gallon/Km_mileage*100;
	printf_s("����ÿ����������ʻ��Ӣ������%.1f.\n", Miles_per_gallon);
	printf_s("ÿ100��������%.1f������\n", A_Km_Litre);
	return 0;
}