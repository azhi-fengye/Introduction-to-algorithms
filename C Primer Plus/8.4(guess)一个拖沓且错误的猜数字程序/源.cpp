#include<stdio.h>
int main(void)
{
	int guess = 1;
	printf_s("Pick an integer from 1 to 100.I will try to guess");//��1-100��ѡ��һ�������������²¿���
	printf_s("it.\nRespond with a y if my guess is right and with"); //����ҵĲ²��ǶԵģ��Ǿ���y�����ݡ�
	printf_s("\nan n if it is wrong,\n");//����Ǵ�ģ�
	printf_s("Uh,,,is your number %d ?\n",guess); //����������ĺ�����% d��
	while (getchar()!='y')
	{
		printf_s("well.then,is it %d?\n", ++guess);//�ðɣ���ô����%d��
	}
	printf_s("I knew I could do it!\n");//�Ҿ�֪�������У�
	return 0;
}