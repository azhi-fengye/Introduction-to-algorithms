#include<stdio.h>//vowels:Ԫ��
int main(void)
{
	char ch;
	int a_ct = 0, e_ct = 0, i_ct = 0, o_ct = 0, u_ct = 0;
	printf_s("Enter some text;enter # to quit.\n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case 'a':
		case 'A':a_ct++;
			break;
		case 'e':
		case 'E':e_ct++;
			break;
		case 'i':
		case 'I':i_ct++;
			break;
		case 'o':
		case 'O':o_ct++;
			break;
		case 'u':
		case 'U':u_ct++;
			break;
		default:
			break;
		}
	}
	printf_s("number of vowels:    A    E    I    O    U\n");
	printf_s("                 %5d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);
	return 0;
}