#include <stdio.h>

// 使用预处理定义常量
#define MAX 100
#define NEW_LIBE '\n'
int constant_main()
{
	printf("this is a constant variable \n");

	printf("will print use define keyword constants \n");

	printf("the MAX constants value is %lu \n", MAX);
	
	printf("the NOW_LINE constant value is %c \n", NEW_LIBE);

	const VARIABLE_CONSTANT_HEIGHT = 100;
	const VARIABLE_CONSTANT_WIGHT = 50;

	printf("next will print use constant keyword constatn \n");
	printf("the VARIABLE_CONSTANT_HEIGHT value is %lu \n", VARIABLE_CONSTANT_HEIGHT);
	printf("the VARIABLE_CONSTANT_WIGHT value is %lu \n", VARIABLE_CONSTANT_WIGHT);

	return 0;
}