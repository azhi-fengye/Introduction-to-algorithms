#include<stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;
	rv = printf_s("%d F is water's boiling point.\n", bph2o);//%d F��ˮ�ķе�
	printf_s("The printf() function printed %d characters.\n", rv);//������������:��ӡ%d���ַ���
	return 0;
}