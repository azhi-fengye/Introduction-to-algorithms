/*���������ͬaabb��4λ��ȫƽ����*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	for  (int i= 0;;i++)
	{
		int n = i * i;
		if (n<1000)
		{
			continue;//continue����������forѭ���Ŀ�ʼ��
		}
		if (n>9999)
		{
			break;//break����������ѭ����
		}
		int hi = n / 100;//�ֽ��ǧλ��λ
		int lo = n % 100;//�ֽ����λʮλ
		if (hi/10==hi%10&&lo/10==lo%10)//�ж�ǧλ�Ƿ���ڰ�λ�Լ�ʮλ���ڸ�λ
		{
			printf("%d", n);
		}
	}
	system("pause");
	return 0;
}