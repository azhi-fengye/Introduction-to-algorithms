#include<stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
	int row;
	char ch;
	for (row = 0; row < ROWS; row++)
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++) {
			printf_s("%c", ch);
		}
		printf_s("\n");
	}
	return 0;
}