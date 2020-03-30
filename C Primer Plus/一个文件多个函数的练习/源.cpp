/*下面程序为C Primer Plus学习的三个程序
一个文件中包含两个函数*/
#include<stdio.h>
void butler(void);//第一次是函数原型，告知编译器在程序中要使用该函数，如果没有则会报错：找不到标识符
int main(void)
{
	printf_s("I will summon the butler function.\n");//我们将访问but1er函数。
	butler();
	printf_s("Yes.Bring me some tea and writeable DVDs.\n");//是的。给我拿些茶和可写的dvd来。
	return 0;
}
void butler(void)
{
	printf_s("You rang,sir?\n");// 先生, 您响了吗 ?
}