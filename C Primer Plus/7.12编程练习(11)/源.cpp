/*ABC�ʹ��ӻ�����۵����ۼ�Ϊ2.05��Ԫ/��������ۼ�Ϊ1.15��Ԫ/�������ܲ��ۼ�ΪHULUOBO��Ԫ/��������˷�֮ǰ��100��Ԫ�Ķ�����5%�Ĵ����Żݡ�
���ڻ����5���Ķ�����ȡ6.5��Ԫ���˷ѺͰ�װ�ѣ�5��~20���Ķ�����ȡ14��Ԫ���˷ѺͰ�װ�ѣ�����20���Ķ�����14��Ԫ�Ļ�����ÿ����1������0.5��Ԫ��
��дһ��������ѭ������switch���ʵ���û����벻ͬ����ĸʱ�в�ͬ����Ӧ��������a����Ӧ�����û������󼻵İ�����b����˵İ�����c�Ǻ��ܲ��İ�����
q���˳�����������Ҫ��¼�ۼƵ���������������û�����4������ˣ�Ȼ������5������ˣ�����Ӧ����9������ˡ�Ȼ�󣬸ó���Ҫ��������ܼۡ��ۿۣ�����еĻ�����
�˷ѺͰ�װ�ѡ���󣬳���Ӧ��ʾ���еĹ�����Ϣ����Ʒ�ۼۡ���������������λ�������������Ĳ��˷��á��������ܷ��á��ۿۣ�����еĻ������˷ѺͰ�װ�ѣ�
�Լ����еķ����ܶ
*/
#include<stdio.h>
#define HULUOBO 1.09
#define YANGJI 2.05
#define TIANCAI 1.15
int main(void)
{
	double sum = 0, zongJia = 0, youHui = 0, yunFei = 0, tianCai = 0, tianCaiSum = 0, yangJi = 0, yangJiSum = 0, huLuoBo = 0, huLuoBoSum = 0;
	char type = 0;

	while (type != 'q')
	{
		printf_s("��ѡ������Ҫ���߲����ͣ�\n");
		printf_s("(a)���\t\t(b)��\t\t(c)���ܲ�\t\t��q���˳�\n");
		type = getchar();
		switch (type)
		{
		case 'a':
			printf_s("����������Ҫ��˵�����:");
			scanf_s("%lf", &tianCai);
			tianCaiSum += tianCai;
			//printf_s("����ǰ�������������ǣ�%lf", tianCaiSum);
			break;
		case 'b':
			printf_s("����������Ҫ���󼻵�������");
			scanf_s("%lf", &yangJi);
			yangJiSum += yangJi;
			break;
		case 'c':
			printf_s("����������Ҫ�ĺ��ܲ���������");
			scanf_s("%lf", &huLuoBo);
			huLuoBoSum += huLuoBo;
			break;
		case'q':
			continue;
		}
		type = getchar();
	}
	sum = huLuoBoSum + yangJiSum + tianCaiSum;
	if (sum <= 5)
	{
		zongJia = huLuoBoSum * HULUOBO + yangJiSum * YANGJI + tianCaiSum * TIANCAI + 6.5;
		yunFei = 6.5;
	}
	else if (sum <= 20)
	{
		zongJia = huLuoBoSum * HULUOBO + yangJiSum * YANGJI + tianCaiSum * TIANCAI + 14;
		yunFei = 14;
	}
	else
	{
		zongJia = huLuoBoSum * HULUOBO + yangJiSum * YANGJI + tianCaiSum * TIANCAI + 14 + (sum - 20) * 0.5;
		yunFei = 14 + (sum - 20) * 0.5;
	}
	if (zongJia >= 100)
	{
		youHui = zongJia * 0.05;
		zongJia -= youHui;
	}
	printf_s("����\t\t����\t\t����\t\t���\n");
	printf_s("���\t\t$1.15/��\t\t%.2f\t\t%.2f\n", tianCaiSum, tianCaiSum * 1.15);
	printf_s("��\t\t$2.05/��\t\t%.2f\t\t%.2f\n", yangJiSum, yangJiSum * 2.05);
	printf_s("���ܲ�\t\t$1.09/��\t\t%.2f\t\t%.2f\n", huLuoBoSum, huLuoBoSum * 1.09);
	//printf_s("�ܼۣ�%.2f���Ż�:%,2f���˷ѺͰ�װ��:%.2f", zongJia, youHui,yunFei);
	printf_s("�ܼۣ�%.2f���Żݣ�%.2f���˷ѺͰ�װ�ѣ�%.2f����������%.2f\n", zongJia, youHui, yunFei, sum);
	return 0;
}