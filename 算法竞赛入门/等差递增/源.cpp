/*输入一个值n，依次输出1-n*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <=n; i++)
	{
		printf("%d  ", i);
	}
	system("pause");
	return 0;
}