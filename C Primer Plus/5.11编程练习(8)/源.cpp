/*��дһ��������ʾ��ģ����Ľ�������û�����ĵ�1��������Ϊ��ģ������ĵ�2���������
��������������б��ֲ��䡣�û�������������ǵ�1��������󡣵��û�����һ������ֵʱ��
��������������ʾ�����£�
This program computes moduli.//����������ģ��
Enter an integer to serve as the second operand:256//����һ��������Ϊ�ڶ���������:
Now enter the first operand:438//���������һ��������:
438 % 256 is 182
Enter next number for first operand (<=0 to quit):1234567/�����һ������������һ������(<=0�˳�):
1234567 % 256 is 135
Enter next number for first operand (<=0 to quit):0//�����һ������������һ������(<=0�˳�):
Done*/
#include<stdio.h>
int main(void)
{
	printf_s("This program conputes moduli.");
	int mod1, mod2,left;
	printf_s("Enter an integer to serve ad the second operand:");
	scanf_s("%d", &mod2);
	while (mod2>0)
	{
		printf_s("Now enter the first operand:");
		scanf_s("%d", &mod1);
		while (mod1>0)
		{
			left = mod1 % mod2;
			printf_s("%d %% %d is %d\n", mod1, mod2, left);
			printf_s("Enter next number for first operand (<=0 to quit):");
			scanf_s("%d", &mod1);
		}
		printf_s("Done");
		return 0;
	}
}