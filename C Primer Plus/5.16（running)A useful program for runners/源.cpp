/*һ�����õĳ���*/
#include<stdio.h>
const int S_PER_M = 60;//һ���ӵ�����
const int S_PER_H = 3600;//һСʱ������
const double M_PER_K = 0.62137;//һ�����Ӣ����
int main(void)
{
	double distk, distm;//�ܹ��ľ���(�ֱ��Թ����Ӣ��Ϊ��λ)
	double rate;//ƽ���ٶ�(��Ӣ��/СʱΪ��λ)
	int min, sec;//�ܲ���ʱ(�Է��Ӻ���Ϊ��λ)
	int time;//�ܲ���ʱ(����Ϊ��λ)
	double mtime;//��1Ӣ����Ҫ��ʱ��,����Ϊ��λ
	int mmin, msec;//��1Ӣ����Ҫ��ʱ��,�Է��Ӻ���Ϊ��λ
	printf_s("This program converts your time for a metric race\n");//�������ת�����ʱ����й��Ʊ���
	printf_s("to a time for running a mile and to your average\n");//һӢ����ܲ�ʱ������ƽ���ɼ�
	printf_s("speed in miles per hour.\n");//�ٶȵĵ�λ��Ӣ��ÿСʱ��
	printf_s("Please enter,in kilometers,the distance run.\n");//�����룬�Թ���Ϊ��λ�������ܡ�
	scanf_s("%lf", &distk);//%lf��ʾһ��double��ֵ
	printf_s("Next enter the time in minutes and seconds.\n");//�����������Է��Ӻ���Ϊ��λ��ʱ�䡣
	printf_s("Begin by entering the minutes.\n");//��������ӿ�ʼ
	scanf_s("%d", &min);
	printf_s("Now enter the seconds.\n");//��������������
	scanf_s("%d", &sec);
	time = S_PER_M * min + sec;//��ʱ��ת������
	distm = M_PER_K * distk;//�ѹ���ת����Ӣ��
	rate = distm / time * S_PER_H;//Ӣ��/��*��/Сʱ=Ӣ��/Сʱ
	mtime = (double)time / distm;//ʱ��/����=��1Ӣ�����õ�ʱ��
	mmin = (int)mtime / S_PER_M;//���������
	msec = (int)mtime % S_PER_M;//���ʣ�������
	printf_s("You ran %1.2f km(%1.2f miles) in %d min,%d sec.\n",distk,distk,min,sec);//You ran %1.2fkm(%1.2f miles) in %dmin,%dsec.����%d��%d��������%1.2f���%1.2fӢ�
	printf_s("That pace corresponds to running a mile in %d min,", mmin);//����ٶ��൱����%d������һӢ�
	printf_s("%d sec.\nYour average speed was %1.2f mph.\n", msec, rate);//%d��.���ƽ���ٶ�Ϊ%1.2fmph."
	return 0;
}