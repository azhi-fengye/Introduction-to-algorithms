#include<stdio.h>
int main(void)
{
	printf_s("integer division: 5/4 is %d \n", 5 / 4); //integer division������������
	printf_s("integer division: 6/3 is %d \n", 6 / 3);//����������ضϼ�������С������
	printf_s("integer division: 7/4 is %d \n", 7 / 4);//����������С�����֣���������������
	printf_s("floating division: 7./4 is %1.2f \n", 7. / 4);//floating division�����������
	printf_s("mixed division:   7./4 is %1.2f \n", 7. / 4);//mixed division����ϳ�����
	return 0;
}