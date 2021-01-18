/*编写一个程序，提示用户输入名字，并执行以下操作：
a.打印名字，包括双引号；
b.在宽度为20的字段右端打印名字，包括双引号；
c.在宽度为20的字段左端打印名字，包括双引号；
d.在比姓名宽度长3的字段中打印名字；*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[20] = {};
	int len_ming, len_xing;
	printf_s("请输入您的名字：\n");
	scanf_s("%s", name,20);
	len_ming = strlen(name);
	printf_s("“%s”\n",name);
	printf_s("“%20s”\n", name);
	printf_s("“%-20s”\n", name);
	printf_s("“%-*s”", len_ming+3, name);
	return 0;
}