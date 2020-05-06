#include<stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
	printf_s("[%2s]\n", BLURB);
	printf_s("[%24s]\n", BLURB);
	printf_s("[%24.5s]\n", BLURB);
	printf_s("[%-24.5s]\n", BLURB);
	return 0;
}