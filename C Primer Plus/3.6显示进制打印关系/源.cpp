#include<stdio.h>
int main(void)
{
	int x = 100;
	printf_s("dec=%d;octal=%o;hex=%x\n", x, x, x);//octal���˽��Ƶģ�hex��16���Ƶġ�
	printf_s("dec=%d;octal=%#o;hex=%#x\n", x, x, x);//���Ҫ�ڰ˽��ƺ�ʮ������ǰ��ʾ0��0xǰ׺��Ҫ�ֱ���ת��˵���м���#��%o�ǰ˽��ƣ�%x��ʮ�����ơ�
	return 0;
}