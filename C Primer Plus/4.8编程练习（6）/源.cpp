/*��дһ����������ʾ�û���������Ȼ����ʾ�û������ա���һ�д�ӡ�û����������գ���һ�зֱ��ӡ�����յ���ĸ����
��ĸ��Ҫ����Ӧ�����յĽ�β���룬������ʾ��
Melissa Honeybee
      7        8
���������ٴ�ӡ��ͬ����Ϣ��������ĸ��������Ӧ�����յĿ�ͷ���룬������ʾ��
Melissa Honeybee
7       8*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char xing[20], ming[20];
    int ming_length,xing_length;
    printf_s("��������������\n");
    scanf_s("%s", ming,sizeof(xing));
    printf_s("�����������գ�\n");
    scanf_s("%s", xing,sizeof(xing));
    ming_length = strlen(ming);
    xing_length = strlen(xing);
    printf_s("%s %s\n", ming, xing);
    printf_s("%*d %*d\n", ming_length, ming_length, xing_length, xing_length);
    printf_s("%s %s\n", ming, xing);
    printf_s("%-*d %-*d\n", ming_length, ming_length, xing_length, xing_length);
    return 0;
}