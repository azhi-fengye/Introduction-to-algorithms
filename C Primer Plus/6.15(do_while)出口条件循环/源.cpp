#include<stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;
	do
	{
		printf_s("To enter the triskaidekaphobia therapy club,\n");//ȥ�μӿ���֢���ƾ��ֲ�,
		printf_s("please enter the secret code number:");//����������
		scanf_s("%d", &code_entered);
	} while (code_entered!=secret_code);
	printf_s("Congratulations! You are cured!\n");//��ϲ��!���Ѿ�Ȭ����!
	return 0;
}