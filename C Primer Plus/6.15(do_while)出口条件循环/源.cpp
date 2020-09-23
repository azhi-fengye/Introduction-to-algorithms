#include<stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;
	do
	{
		printf_s("To enter the triskaidekaphobia therapy club,\n");//去参加恐三症治疗俱乐部,
		printf_s("please enter the secret code number:");//请输入密码
		scanf_s("%d", &code_entered);
	} while (code_entered!=secret_code);
	printf_s("Congratulations! You are cured!\n");//恭喜你!你已经痊愈了!
	return 0;
}