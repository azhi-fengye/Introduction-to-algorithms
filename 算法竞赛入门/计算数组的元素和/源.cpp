#include<stdio.h>
#include<string.h>
int sum(int* begin, int* end)
{
	int *p = begin;
	int ans = 0;
	for (int *p=begin; *p!=*end; *p++)
	{
		ans += *p;
	}
	return ans;
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10,6,8};
	int n = sizeof(a)/sizeof(a[0]);//����ռ�ڴ��ܿռ䣬���Ե���Ԫ��ռ�ڴ�ռ��С��
	printf("%d", sum(a, a+n));
	return 0;
}