/*��дһ�����򣬽�һ��double���͵ı�������Ϊ1.0/3.0��һ��float���͵ı�������Ϊ1.0/3.0���ֱ���ʾ����
����Ľ�������Σ�һ����ʾС�������6λ��һ����ʾС�������12λ��һ����ʾС�������16λ���֡�
������Ҫ����float.h�ļ�������ʾFLT_DIG��DBL_DIG��ֵ��1.0/3.0��ֵ����Щֵһ����*/
#include<stdio.h>
#include<float.h>
int main(void)
{
	double D_vlaue = 1.0 / 3.0;
	float F_vlaue = 1.0 / 3.0;
	printf_s("%d %d\n",DBL_DIG,FLT_DIG);
	/*DBL_DIG��FLT_DIG��������float.hͷ�ļ����棬
	����˵��double��float��������������Ч���ֵ�λ����
	ע�ⲻ��С����������Чλ������������λ����*/
	printf_s("%.6f %.6f\n", D_vlaue, F_vlaue);
	printf_s("%.12f %.12f\n", D_vlaue, F_vlaue);
	printf_s("%.16f %.16f\n", D_vlaue, F_vlaue);
	return 0;
}
