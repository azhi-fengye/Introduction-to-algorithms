#include<stdio.h>
int main(void)
{
	float weight;//�������
	float value;//��������İ׽��ֵ
	printf_s("Are you worth your weight in platinum?\n");//�������ֵ�׽���?
	printf_s("Let's check it out.\n");//����������
	printf_s("Please enter your weight in pounds:");//���԰�Ϊ��λ�����������
	/*��ȡ�û�������*/
	scanf_s("%f", &weight);
	/*����׽�ļ۸���ÿ��˾$1700(1700�ǰ׽���м�)
	14.5833���ڰ�Ӣ����˾ת���ɽ����˾(13.5833��1Ӣ���Ľ����˾��)*/
	value = 1700.0 * weight * 14.5833;
	printf_s("Your weight in platinum is worth $%.2f.\n", value);//��������ڰ׽��ϵļ�ֵ�ǡ�
	printf_s("You are easily worth that!If platinum prices drop,\n");//�������ֵ�����!�������۸��µ���
	printf_s("eat more to maintain your value.\n");//��ԣ�������ļ�ֵ��
	getchar();
	getchar();
	return 0;
}