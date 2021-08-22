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
	// 创建一个文件结构
	FILE* file = NULL;

	file = fopen("D:/temp/tempfile.txt", "w+");
	// 尝试使用fprintf函数写入数据
	fprintf(file,"if you can see this, it's means fprintf worked!\n");

	// 再次尝试使用fput方法写入数据
	fputs("if you can see this,it's means fputs fun is worked!\n", file);

	// 关闭IO
	fclose(file);
}

void readFile(void)
{
	// 定义一个FILE结构
	FILE* file = fopen("D:/temp/tempfile.txt", "r");

	// fgetc()单个字符
	printf("excute fgetc fun  is %c\n", fgetc(file));
	
	// 缓冲读取
	// 定义一个缓冲字符数组
	char buff[255];

	// 使用fcanf读取
	fscanf(file, "%s", buff);
	printf("excute fsanf is %s\n", buff);

	fgets(buff, 255, file);
	printf("excute fgets() is %s\n", buff);

	fgets(buff, 255, file);
	printf("excute fgets() is %s\n", buff);

	fclose(file);
}