/*1988�����������˰�ռƻ��ǽ�����򵥵�˰�շ���������Ϊ4�����ÿ������������ȼ���
�����Ǹ�˰�ռƻ���ժҪ����Ԫ��ΪӦ��˰�����룩��
���					˰��
����					17850��Ԫ��15%�ƣ��������ְ�28%��
����					23900��Ԫ��15%�ƣ��������ְ�28%��
�ѻ飬����				29700��Ԫ��15%�ƣ��������ְ�28%��
�ѻ飬����				14875��Ԫ��15%�ƣ��������ְ�28%��
���磬һλ����Ϊ20000��Ԫ�ĵ�����˰�ˣ�Ӧ����˰��0.15*17850+0.28*��20000-17850����Ԫ��
��дһ���������û�ָ������˰��������Ӧ��˰���룬Ȼ�����˰�𡣳���Ӧͨ��ѭ�����û����Զ�����롣*/
#include<stdio.h>
#include<stdbool.h>
#define NO_OVER_TAX  0.25//δ�������ֵ�˰��
#define OVER_TAX 0.28//�������ֵ�˰��
#define SINGLE_STANDARD 17850//��������˰���׼
#define HOUSEHOLDER_STANDARD 23900//��������˰���׼��
#define MARRIED_STANDARD 29700//�ѻ飬��������˰���׼��
#define MARRIED_OVER_STANDARD 14875//�ѻ飬��������˰���׼��
int screen(void)
{
	
	printf_s("���\t\t\t\t\t˰��\n");
	printf_s("a:����\t\t\t\t\t17850��Ԫ��15%%�ƣ��������ְ�28%%��\n");
	printf_s("b:����\t\t\t\t\t23900��Ԫ��15%%�ƣ��������ְ�28%%��\n");
	printf_s("c:�ѻ飬����\t\t\t\t29700��Ԫ��15%%�ƣ��������ְ�28%%��\n");
	printf_s("d:�ѻ飬����\t\t\t\t14875��Ԫ��15%%�ƣ��������ְ�28%%��\n");
	printf_s("��ѡ���������:\n");
	return 0;
}
int main(void)
{
	char type[5] = {0};
	double income;
	bool cookie = true;
	while (cookie)
	{
		screen();
		scanf_s("%s",type,2);
		printf_s("�������������룺\n");
		scanf_s("%lf", &income);
		switch (type[0])
		{
		case 'a':
			//cookie = false;
			if (income <= SINGLE_STANDARD)
			{
				printf_s("%.2lf\n", income - (income * 0.15));
			}
			else {
				printf_s("%.2lf\n", ((SINGLE_STANDARD * 0.15) + (income - SINGLE_STANDARD) * 0.28));
			}
			break;
		case'b':
			//cookie = false;
			if (income <= HOUSEHOLDER_STANDARD)
			{
				printf_s("%.2lf\n", income - (income * 0.15));
			}
			else {
				printf_s("%.2lf\n", ((HOUSEHOLDER_STANDARD * 0.15) + (income - HOUSEHOLDER_STANDARD) * 0.28));
			}
			break;
		case'c':
			//cookie = false;
			if (income <= MARRIED_STANDARD)
			{
				printf_s("%.2lf\n", income - (income * 0.15));
			}
			else {
				printf_s("%.2lf\n", ((MARRIED_STANDARD * 0.15) + (income - MARRIED_STANDARD) * 0.28));
			}
			break;
		case'd':
			//cookie = false;
			if (income <= MARRIED_OVER_STANDARD)
			{
				printf_s("%.2lf\n", income - (income * 0.15));
			}
			else {
				printf_s("%.2lf\n", ((MARRIED_OVER_STANDARD * 0.15) + (income - MARRIED_OVER_STANDARD) * 0.28));
			}
			break;
		default:
			//cookie = false;
			printf_s("���������������\n");
			break;
		}
	}
	return 0;
}