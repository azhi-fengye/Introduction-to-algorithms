/*
��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8������
*/
#include <stdio.h>
#include<string.h>
#define SIZE 10
int main(void)
{
	int num[SIZE];
	int	len=0;
	printf("Start:");//��ʼ
	printf("Please enter %d integers.\n", SIZE);//����������:
		while(scanf_s("%d", &num[len]) == 1)
		{
			len = len + 1;
			if (len>=SIZE)
			{
				break;
			}
		}
	printf("Here, in reverse order, are the values you entered:\n");//���棬���������У����������ֵ��
	for (int  j = len-1; j >=0; j--)
	{
		printf_s("%d", num[j]);
	}
	printf("Done! \n");

	return 0;
}
