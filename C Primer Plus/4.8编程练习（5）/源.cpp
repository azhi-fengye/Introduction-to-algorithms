/*
��дһ��������ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶȺ�����λ��MB��Ϊ��λ���ļ���С��������Ӧ�����ļ�������ʱ�䡣
ע�⣬����1�ֽڵ���8λ��ʹ��float���ͣ�����/��Ϊ���š��ó���Ҫ������ĸ�ʽ��ӡ3��������ֵ�������ٶȡ��ļ���С������ʱ�䣩��
��ʾС���������λ���֣�
At 18.12 megabits per second,a file of 2.20 megabytes//��ÿ��18.12�ױ��ص��ٶ��£�һ��2.20���ֽڵ��ļ�
downloads in 0.97 seconds.��0.97�������ء�
*/
#include<stdio.h>
int main(void)
{
	float download_speed,file_size,download_time;
	printf_s("�����������ٶȣ�MB/S����\n");
	scanf_s("%f", &download_speed);
	printf_s("�������ļ���С����MB����\n");
	scanf_s("%f", &file_size);
	download_time = file_size*8/ download_speed;
	printf_s("At %.2f megabits per second,a file of %.2f megabytes downloads in %.2f seconds.", download_speed, file_size, download_time);
	return 0;
}