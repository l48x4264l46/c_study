#include<stdio.h>

void int2Double();

int cast_main()
{
	int2Double();
}

/**double 转换成 int类型*/
void int2Double()
{
	double castDouble;
	int a = 10;
	
	castDouble = (double)a;

	printf("the cast num is %f \n", castDouble);
		
}