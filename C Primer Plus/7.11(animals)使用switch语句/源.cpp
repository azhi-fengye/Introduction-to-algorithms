#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	printf_s("Give me a letter of the alphabet,and I will give");//����һ����ĸ�������ĸ���Ҿ͸�
	printf_s("an animal name\nbeginning with that letter.\n");//һ��������������Ǹ���ĸ��ͷ��
	printf_s("Please type in a letter;type # to end my act.\n");//���һ����;��#�����ҵ���Ϊ��
	while ((ch = getchar()) != '#')
	{
		if ('\n' == ch)
		{
			continue;
		}
		if (islower(ch))
		{
			switch (ch)
			{
			case 'a':
				printf_s("argali, a wild sheep of Asia\n");//�������޵�һ��Ұ������
				break;
			case'b':
				printf_s("babirusa, a wild pig of Malay\n");//Ұ������Ұ��
				break;
			case 'c':
				printf_s("coati, racoonlike mammal\n");//���ᣬ����ܵĲ��鶯��
				break;
			case 'e':
				printf_s("echidna,the spiny anteater\n");// ��������ʳ����
				break;
			case 'f':
				printf_s("fisher,brownish marten\n");//�����,��ɫ��
				break;
			default:
				printf_s("That's a stumper!\n");//����һ������!

			}
		}
		else
		{
			printf_s("I recognize only lowercase letters.\n");//��ֻ��ʶһЩСд��ĸ�������ǰ��islower�ж�����Ĳ�����Сд��ĸʱ��ӡ�Ľ��
		}
		while (getchar() != '\n')
		{
			continue;
		}
		printf_s("Please type another letter or a #.\n");//���ٴ�һ����ĸ��һ��#
	}
	printf_s("Bye!");
	return 0;
}