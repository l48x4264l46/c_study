#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void writeFile(void);	

void readFile(void);

int file_main()
{
	readFile();
}

void writeFile(void)
{
	// ����һ���ļ��ṹ
	FILE* file = NULL;

	file = fopen("D:/temp/tempfile.txt", "w+");
	// ����ʹ��fprintf����д������
	fprintf(file,"if you can see this, it's means fprintf worked!\n");

	// �ٴγ���ʹ��fput����д������
	fputs("if you can see this,it's means fputs fun is worked!\n", file);

	// �ر�IO
	fclose(file);
}

void readFile(void)
{
	// ����һ��FILE�ṹ
	FILE* file = fopen("D:/temp/tempfile.txt", "r");

	// fgetc()�����ַ�
	printf("excute fgetc fun  is %c\n", fgetc(file));
	
	// �����ȡ
	// ����һ�������ַ�����
	char buff[255];

	// ʹ��fcanf��ȡ
	fscanf(file, "%s", buff);
	printf("excute fsanf is %s\n", buff);

	fgets(buff, 255, file);
	printf("excute fgets() is %s\n", buff);

	fgets(buff, 255, file);
	printf("excute fgets() is %s\n", buff);

	fclose(file);
}