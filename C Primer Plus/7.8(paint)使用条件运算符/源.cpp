#include<stdio.h>
#define COVERAGE 350
int main(void)
{
	int sq_feet;//ƽ��Ӣ��
	int cans;//��
	printf_s("Enter number of square feet to be painted:\n");//������Ҫ���Ƶ�ƽ��Ӣ����
	while (scanf_s("%d",&sq_feet)==1)//������Ҫ��ˢ�����
	{
		cans = sq_feet / COVERAGE;//��Ϊcans��int�������ͣ�����δ�����С���ᱻ�ضϡ�
		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;//�ж��Ƿ�����һ������ȡ�� ���ܵĻ���cans�Ļ����ϣ�1.
		printf_s("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");//����Ҫ%d������.
		printf_s("Enter next value (q to quit):\n");//����һ���µ�ֵ��q�˳���
	}
	return 0;
}