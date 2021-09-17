#include<stdio.h>

double factorial(unsigned int);

int re_main()
{
	printf("the 5 factorial is %f", factorial(5));
}

/**ÊýµÄ½×³Ë*/
double factorial(unsigned int i)
{
	if (1 == i)
	{
		return 1;
	}

	return i * factorial(i - 1);
}