/*��дһ��������ʾ�û�����һ����ߣ���λ�����ף������ֱ������׺�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�����Ӧ�������û��ظ�������ߣ�ֱ���û�����һ������ֵΪֹ�������ʵ�����£�
Enter a height in centimeters (<=0 to quit):182
182.0 cm=5 feet,11.7inches
Enter a height in centimeters (<=0 to quit):168.7
168.7 cm=5 feet,6.4 inches
Enter a height in centimeters(<=0 to quit):0
bye
*/
#include<stdio.h>
#define AFEET_TO_CM 2.54
int main(void)
{
	double height,feet,inches;
	scanf_s("%f", &height);
	while (height>0)
	{
		feet = height / AFEET_TO_CM;
	}
}