#include<stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;
	printf_s("Enter a number and the positive integer power");//����һ�����ֺ�����������
	printf_s(" to which\nthe number will be raised.Enter q");//������ֽ��ᱻ��ߡ�����q�˳�
	printf_s(" to quit.");
	while (scanf_s("%lf%d",&x,&exp)==2)
	{
		xpow = power(x, exp);
		printf_s("%.3g to the power %d is %.5g\n", x, exp, xpow);//%g:����ֵ�Ĳ�ͬ���Զ�ѡ��%f����%e��%e��ʽ����ָ��С��-4���ߴ��ڻ���ھ���ʱ
																//%.3g��%d�η���%.5g��
		printf_s("Enter next pair of numbers or q to quit.\n");//������һ�����ֻ�q�˳���
	}
	printf_s("Hope you enjoyed this power trip -- bye!\n");//ϣ����ϲ�����Ȩ��֮�á����ټ�!
	return 0;
}
double power(double n, int p)
{
	double pow = 1;
	for (int  i = 1; i <=p; i++)
	{
		pow *= n;
	}
	return pow;
}