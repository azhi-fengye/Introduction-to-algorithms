#include<stdio.h>
int main(void)
{
	const int secret_code = 13;//secret_code=����
	int code_entered;//code_entered=��������
	printf_s("To enter the triskaidekaphobia therapy club,\n");//������ֲ�,������13֢����
	printf_s("Please enter the secret code number:");//��������������:
	scanf_s("%d", &code_entered);
	while (code_entered!=secret_code)
	{
		printf_s("To enter the triskaidekaphobia therapy club,\n");//������ֲ�,������13֢����
		printf_s("please enter the secret code number:");//��������������:
		scanf_s("%d", &code_entered);
	}
	printf_s("Congratulations!You are cured!\n");//��ϲ��!���Ѿ�Ȭ����!
	return 0;
}