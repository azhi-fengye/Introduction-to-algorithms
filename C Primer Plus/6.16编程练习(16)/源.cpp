/*Daphne��10%�ĵ���ϢͶ����100��Ԫ(Ҳ����˵��ÿ��Ͷ�ʻ����൱��ԭʼͶ�ʵ�10%)��
Deirdre��5%�ĸ�����ϢͶ����100��Ԫ��Ҳ����˵����Ϣ�ǵ�ǰ����5%������֮ǰ����Ϣ����
��дһ�����򣬼�����Ҫ������Deirdre��Ͷ�ʶ�Żᳬ��Daphne������ʾ��ʱ���˵�Ͷ�ʶ*/
#include<stdio.h>
int main(void)
{
	double sum1 = 100, sum2 = 100;
	int	count=0;
	do
	{
		count++;
		sum1 += 100 * 0.1;
		sum2 += sum2 * 0.05;
	} while (sum1>=sum2);
	printf_s("Deirdre��Ͷ�ʶ���ڵ�%d�곬��Daphne��Ͷ�ʶ\n��ʱDeirdre��Ͷ�ʶ�Ϊ%f,Daphne��Ͷ�ʶ�Ϊ%f",count,sum2, sum1);
	return 0;
}