#include<stdio.h>
int main(void)
{
	unsigned int un = 3000000000;//intΪ32λ��shortΪ16��ϵͳ
	short end = 200;
	long big = 65537;
	long long verybig = 1234567890642;
	char response;
	printf_s("un=%u and not %d\n", un, un);/*un=3000000000 and not -1294967296(unsignedΪ�޷��ŵ�int����ΧΪ0~4294967295��
										   int�ķ�ΧΪ-2147493648~2147483647,����������ʼ�㿪ʼ��int��-2147483648��ʼ��*/
	printf_s("end=%hd and %d\n", end, end);//end=200 and 200
	printf_s("big=%ld and not %hd\n",big, big);//big=65537 and not 1(65537д�ɶ����ƺ�16λֻ��1.%hdת��˵��ֻ��鿴��16λ�������1.
	printf_s("verybig=%lld and not %ld\n", verybig, verybig);//verybig=1234567890642 and not 1912276690��ͬ�� 1234567890642д�ɶ����ƺ�32λ��ֵת����10����Ϊ1912276690.
	return 0;
}