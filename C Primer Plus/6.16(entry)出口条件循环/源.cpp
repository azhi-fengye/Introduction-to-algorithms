#include<stdio.h>
int main(void)
{
	const int secret_code = 13;//secret_code=密码
	int code_entered;//code_entered=代码输入
	printf_s("To enter the triskaidekaphobia therapy club,\n");//进入俱乐部,恐数字13症治疗
	printf_s("Please enter the secret code number:");//数量请输入密码:
	scanf_s("%d", &code_entered);
	while (code_entered!=secret_code)
	{
		printf_s("To enter the triskaidekaphobia therapy club,\n");//进入俱乐部,恐数字13症治疗
		printf_s("please enter the secret code number:");//数量请输入密码:
		scanf_s("%d", &code_entered);
	}
	printf_s("Congratulations!You are cured!\n");//恭喜你!你已经痊愈了!
	return 0;
}