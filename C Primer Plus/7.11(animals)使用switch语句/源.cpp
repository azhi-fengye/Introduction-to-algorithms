#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	printf_s("Give me a letter of the alphabet,and I will give");//给我一个字母表里的字母，我就给
	printf_s("an animal name\nbeginning with that letter.\n");//一个动物的名字以那个字母开头。
	printf_s("Please type in a letter;type # to end my act.\n");//请打一封信;打#结束我的行为。
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
				printf_s("argali, a wild sheep of Asia\n");//盘羊，亚洲的一种野生绵羊
				break;
			case'b':
				printf_s("babirusa, a wild pig of Malay\n");//野猪，马来野猪
				break;
			case 'c':
				printf_s("coati, racoonlike mammal\n");//科提，类浣熊的哺乳动物
				break;
			case 'e':
				printf_s("echidna,the spiny anteater\n");// 针鼹，刺食蚁兽
				break;
			case 'f':
				printf_s("fisher,brownish marten\n");//费舍尔,褐色貂
				break;
			default:
				printf_s("That's a stumper!\n");//这是一个难题!

			}
		}
		else
		{
			printf_s("I recognize only lowercase letters.\n");//我只认识一些小写字母。这个是前面islower判断输入的并非是小写字母时打印的结果
		}
		while (getchar() != '\n')
		{
			continue;
		}
		printf_s("Please type another letter or a #.\n");//请再打一个字母或一个#
	}
	printf_s("Bye!");
	return 0;
}