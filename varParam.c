#include<stdio.h>
#include<stdarg.h>

/**平均数*/
double avg(int, ...);
int varP_main()
{
	return 0;
}

double avg(int num, ...)
{
	va_list valist;
	double sum = 0;

	/**初始化参数*/
	va_start(valist, num);


}