/*��дһ��������ʾ�û�����һ����ߣ���λ�����ף������ֱ������׺�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�����Ӧ�������û��ظ�������ߣ�ֱ���û�����һ������ֵΪֹ�������ʵ�����£�
Enter a height in centimeters (<=0 to quit):182
182.0 cm=5 feet,11.7inches
Enter a height in centimeters (<=0 to quit):168.7
168.7 cm=5 feet,6.4 inches
Enter a height in centimeters(<=0 to quit):0
bye
*/
#include<stdio.h>
#include<math.h>
#define AFEET_TO_CM 2.54
int main(void)
{
	float height, inches,left;
	int feet;
	printf_s("Enter a height in centimeters(<=0 to quit):");
	scanf_s("%f", &height);
	while (height > 0)
	{
		inches = height / AFEET_TO_CM;
		feet = inches / 12;//1Ӣ�ߵ���12Ӣ�磻
		left = fmod(inches, 12);//�����������޷�ʹ��%����ȡ�����㡣(ʹ��math.h���fmod()�������и�������ȡ��fmod(x,y):x�Ǳ�������y�ǳ�����
		printf_s("%.1f cm= %d feet , %.1f inches\n", height, feet, left);
		scanf_s("%f", &height);
	}
	printf_s("bye");
	return 0;
}