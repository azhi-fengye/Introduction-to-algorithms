/*ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
* F
* FE
* FED
* FEDC
* FEDCB
* FEDCBA
* ע�⣺������ϵͳ��ʹ��ASCII������������˳�����Ĵ��룬���԰��ַ������ʼ��Ϊ��ĸ���е���ĸ��
* char lets[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
* Ȼ���������±�ѡ�񵥶�����ĸ������lets[0]��'A',�ȵȡ�
*/
#include<stdio.h>
int main(void)
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf_s("%c", 70 - j);
		}
		printf_s("\n");
	}
	return 0;
}