#include<stdio.h>
#include<string.h>
#define DENSITY 62.4//�����ܶȣ���λ����/����Ӣ�ߣ�
int main()
{
	double weight, volume;//���������
	int size, letters;//��С����ĸ
	char name[40];//name��һ����������40���ַ�������
	printf_s("Hi! What's your first name?\n");//�ˣ����ʲô���֣�
	scanf_s("%s",&name,sizeof(name));//�����ϲ�һ������Ϊscanf_s��ҪΪÿ��ռλ���ṩ����������һ�������ṩҪд��ĵ�ַ����һ�������ṩ��һ���Ĵ�С
	printf_s("%s,what's your werght in pounds?\n", name);//��������Ƕ���?
	scanf_s("%lf", &weight);//double���͵�����ת������ʹ��lf
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf_s("Well,%s,your volue is %2.2f cubic feet.\n", name, volume);//�ţ�name����������%2.2f����Ӣ�ߡ�
	printf_s("Also,your first name has %d letters,\n", letters);//���ң����������%d��ĸ��
	printf_s("and we have %d bytes to store it.\n", size);//������%d�ֽ�����������
	return 0;
}
/*�ֱ�����christine��154:
Hi! What's your first name?
christine
christine,what's your werght in pounds?
154
Well,christine,your volue is 2.47 cubic feet.
Also,your first name has 9 letters,
and we have 40 bytes to store it.
*/