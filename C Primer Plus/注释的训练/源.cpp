/*下面的程序为C Primer Plus 学习的第二个程序*/
#include<stdio.h>
int main()
{
	int feet, fathoms;//feet:英尺，fathom：英寻。 英寻为海洋测量中的深度单位 1英寻=6英尺=1.8米；
	fathoms = 2;
	feet = 6 * fathoms;
	printf_s("There are %d feet in %d fathoms!\n", feet, fathoms);//翻译：2英寻有12英尺
	printf_s("Yes, I said %d feet!\n", 6 * fathoms);//翻译：是的，我说的是12英尺
	return 0;
}