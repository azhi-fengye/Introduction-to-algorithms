/*�������ΪC Primer Plusѧϰ����������
һ���ļ��а�����������*/
#include<stdio.h>
void butler(void);//��һ���Ǻ���ԭ�ͣ���֪�������ڳ�����Ҫʹ�øú��������û����ᱨ���Ҳ�����ʶ��
int main(void)
{
	printf_s("I will summon the butler function.\n");//���ǽ�����but1er������
	butler();
	printf_s("Yes.Bring me some tea and writeable DVDs.\n");//�ǵġ�������Щ��Ϳ�д��dvd����
	return 0;
}
void butler(void)
{
	printf_s("You rang,sir?\n");// ����, �������� ?
}