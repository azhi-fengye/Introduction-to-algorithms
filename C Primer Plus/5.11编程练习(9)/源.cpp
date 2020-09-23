/*编写一个程序，要求用户输入一个华氏温度。程序应读取double 类型的值作为温度值，并把该值作为参数传递给一个用户自定义的函数Temperaturse()。
该函数计算摄氏温度和开氏温度，并以小数点后面2位数字的精度显示3种温度。要使用不同的温标来表示这3个温度值。
下面是华氏温度转摄氏温度的公式：
摄氏温度=5.0/9.0*(华氏温度-32.0)
开氏温度常用于科学研究，0表示绝对零，代表最低的温度。下面是摄氏温度转开氏温度的公式:
开氏温度=摄氏温度+273.16
Temperatures()函数中用const创建温度转换中使用的变量。在main()函数中使用一个循环让用户重复输入温度，
当用户输入q或其他非数字时，循环结束。scanf()函数返回读取数据的数量，所以如果读取数字则返回1，如果读取q则不返回1。
可以使用==运算符将scanf()的返回值和1作比较，测试两值是否相等。*/
#include<stdio.h>
void Temperaturse(double t);
int main(void)
{
	double HS_T;
	int count;
	while (scanf_s("%lf",&HS_T)==1)
	{
		Temperaturse(HS_T);
	}
	return 0;
}
void Temperaturse(double t) {
	const double HS_TO_KS=273.16;
	const double HS_TO_SS = 5.0 / 9.0;
	printf_s("华氏温度为%.2lf,摄氏温度为%.2lf,开氏摄氏度为%.2lf",t,HS_TO_SS*(t-32.0), HS_TO_SS * (t - 32.0)+HS_TO_KS);
}



