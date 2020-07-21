#include<stdio.h>
int main(void)
{
	char ch;
	int i;
	float f1;
	f1 = i = ch = 'C';
	printf_s("ch=%c,i=%d,f1=%2.2f\n", ch, i, f1);//ch='C',i=67,f1=67.00;
	ch = ch + 1;
	i = f1 + 2 * ch;
	f1 = 2.0 * ch + i;
	printf_s("ch=%c,i=%d,f1=%2.2f\n", ch, i, f1);//ch='D',f1=203,f1=339.00;
	ch = 1107;
	printf_s("Now ch=%c\n", ch);//Now ch='S'£¨1107%128=87);
	ch = 80.89;
	printf_s("Now ch=%c\n", ch);//Now ch='P'£¨80.89±»½Ø¶Ï);
	return 0;
}