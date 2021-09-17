#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>

extern int errno;

void fileReadError();
void divideError();

int err_main()
{
	divideError();
	return 0;
}

void fileReadError()
{
	// 文件指针
	FILE* f;
	// 错误码
	int errnum;

	// 读取文件
	f = fopen("demo.txt", "rb");

	if (f == NULL)
	{
		errnum = errno;
		fprintf(stderr,"the error code is %d \n", errnum);

		perror("use perror to print error \n");

		fprintf(stderr,	"open file failed %s \n ", strerror(errnum));
	}
	else 
	{
		fclose(f);
	}
}

void divideError()
{
	int a = 1;
	int b = 0;
	int result;

	if (b == 0)
	{
		fprintf(stderr, "divisor can not be 0 ! fun exiting!\n");

		exit(-1);
	}

	result = a / b;
	printf("the result is %d \n", result);
	
	exit(0);
}
