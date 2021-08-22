#include<stdio.h>
#include<string.h>


struct Demo
{
	unsigned int a : 5;
	unsigned int b : 30;
};

struct Demo1
{
	unsigned int a : 4;
	unsigned int :28;
	unsigned int c : 8;
	unsigned int d : 32;
};

/**打印位域*/
void printBitSize(void);

int bit_f_main(void)
{
	printBitSize();
}

void printBitSize(void)
{
	struct Demo demo1;

	// 超出后会溢出
	demo1.a = 31;
	demo1.b = 100;

	printf("the a  is %d \n", demo1.a);
	printf("the b is %d \n",demo1.b);
	printf("the Demo size is %d \n", sizeof(struct Demo1));

	struct Demo *p = &demo1;
	printf("use pointer the a is %d\n", p->a);

	p->b = 2;
	printf("after exucte p->a = 2,the b value is %d", p->b);
}
