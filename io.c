# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/**��ӡ������*/
void printfAndScannf(void);

/***/
void getsAndPrint(void);

/**gets������puts����*/
void getsAndPuts(void);

/**getChar��putChar*/
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
	printf("������һ������\n");
	scanf("%d", &num);
	printf("��������� %s  \n", num % 2 ? "����" :"ż��");
}

void getsAndPrint(void)
{
	int c;
	printf("������һ���ַ���");
	c = getchar();

	printf("����ĵ�һ���ַ�Ϊ��%c",c);
}

void scanfAndPrintf(void)
{
	char chars[100];
	int i;

	printf("����һ��ֵ��");
	scanf("%s %d",&chars, &i);

	printf("\n �������ֵΪ: %s %d", chars, i);
	printf("\n");
}

void getCharAndPutChar(void)
{
	int c;
	printf("����һ���ַ� \n");
	c = getchar();

	printf("\n ��������ַ���:\n");
	putchar(c);
	printf("\n");
}

void getsAndPuts(void)
{
	char str[100];
	printf("����һ��ֵ��\n");
	gets(str);

	printf("�������ֵ�ǣ�\n");
	puts(str);
}