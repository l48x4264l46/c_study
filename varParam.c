#include<stdio.h>
#include<stdarg.h>

/**ƽ����*/
double avg(int, ...);
int varP_main()
{
	return 0;
}

double avg(int num, ...)
{
	va_list valist;
	double sum = 0;

	/**��ʼ������*/
	va_start(valist, num);


}