#include<stdio.h>
#include<inttypes.h>
int main(void)
{
	int32_t me32;
	me32 = 45933945;
	printf_s("First,assume int32_t is int:");
	printf_s("me32=%d\n", me32);
	printf_s("Next,let' not make any assumptions.\n");//接下来，我们不要做任何假设。
	printf_s("Instead,use a\"macro\"form inttypes.h:");
	printf_s("me32 = %d\n", me32);
	return 0;
}