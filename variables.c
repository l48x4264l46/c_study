# include <stdio.h>
int num1;
int num2;


void printNumAgn()
{
	printf("num1 is %lu", num1);
	printf("num2 is %lu", num2);
}

// mian方法需要在最后面
int variable_main()
{
	int a;
	float b;
	double c;
	char d;
	long e;

	extern num1;
	extern num2;

	num1 = 1;
	num2 = 2;

	printf("the num1 and num2 counting is %lu \n", num1 + num2);

	printNumAgn();

	return 0;
}
