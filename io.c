# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/**打印和输入*/
void printfAndScannf(void);

/***/
void getsAndPrint(void);

/**gets方法和puts方法*/
void getsAndPuts(void);

/**getChar和putChar*/
void getCharAndPutChar(void);

void scanfAndPrintf(void);

void getsAndPuts(void);

int io_main()
{
	getsAndPuts();
}

void printfAndScannf(void)
{
	int num;
	printf("请输入一个数字\n");
	scanf("%d", &num);
	printf("您输入的是 %s  \n", num % 2 ? "奇数" :"偶数");
}

void getsAndPrint(void)
{
	int c;
	printf("请输入一个字符：");
	c = getchar();

	printf("输入的第一个字符为：%c",c);
}

void scanfAndPrintf(void)
{
	char chars[100];
	int i;

	printf("键入一个值：");
	scanf("%s %d",&chars, &i);

	printf("\n 您键入的值为: %s %d", chars, i);
	printf("\n");
}

void getCharAndPutChar(void)
{
	int c;
	printf("输入一个字符 \n");
	c = getchar();

	printf("\n 您输入的字符是:\n");
	putchar(c);
	printf("\n");
}

void getsAndPuts(void)
{
	char str[100];
	printf("键入一个值：\n");
	gets(str);

	printf("您键入的值是：\n");
	puts(str);
}