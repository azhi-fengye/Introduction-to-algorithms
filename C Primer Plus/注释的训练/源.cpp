/*����ĳ���ΪC Primer Plus ѧϰ�ĵڶ�������*/
#include<stdio.h>
int main()
{
	int feet, fathoms;//feet:Ӣ�ߣ�fathom��ӢѰ�� ӢѰΪ��������е���ȵ�λ 1ӢѰ=6Ӣ��=1.8�ף�
	fathoms = 2;
	feet = 6 * fathoms;
	printf_s("There are %d feet in %d fathoms!\n", feet, fathoms);//���룺2ӢѰ��12Ӣ��
	printf_s("Yes, I said %d feet!\n", 6 * fathoms);//���룺�ǵģ���˵����12Ӣ��
	return 0;
}