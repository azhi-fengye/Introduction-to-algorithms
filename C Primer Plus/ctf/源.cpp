#include<stdio.h>
#define maxn 300
int arr[maxn];
int main(void)
{
	//int i, c;
	int count = 0;
	for (int j = 33; j < 127; j++)
	{
		arr[count] = j;
		count++;
	}
	return 0;
}