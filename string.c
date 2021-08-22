# include <stdio.h>

/**字符串的定义*/
void stringDef(void);

/**字符串的操作*/
void strOpt(void);

int string_main()
{
	strOpt();
	return 0;
}

void stringDef(void)
{
	// 手动定义一个字符串
	char hellowWorldArray[12] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0' };

	// 尾部自动加上\0
	char helloWorldStr[] = "hello world";
	
	printf("start print arryStr\n");
	for (int i = 0; i < 12; i++)
	{
		printf("the index %d values is %c\n",i , hellowWorldArray[i]);
	}
	printf("print arrayStr end \n start print str \n");
	printf("the str's length is %d \n", sizeof(helloWorldStr) / sizeof(char));
	for (int i = 0; i < 12; i++) 
	{
		printf("the index %d value is %c\n", i, helloWorldStr[i]);
	}
}

void strOpt(void)
{
	// 定义两个字符串
	char str1[] = "this is a string";
	char str2[17];

	// 字符串复制
	printf("the str1 is %s,the str2 is %s \n\n", str1, str2);
	strcpy(str2,str1);
	printf("（复制字符串）after excute strcpy then str2 is %s \n", str2);
	printf("（复制字符串）after excute strcpy then str1 is %s \n", str1);


	// 连接两个字符串
	printf("\n");
	printf("(拼接字符串)before excute strcat the str1 is %s ,str2 is %s \n", str1, str2);
	strcat(str1, str2);
	printf("(拼接字符串) after excute strcat the str1 is %s \n", str1);
	
	// 返回字符串的长度
	printf("\n");
	printf("(字符串长度) the str1 is %s \n", str1);
	int len = strlen(str1);
	printf("the str1 length is %d \n", len);

	// 比较两个字符串
	printf("\n");
	printf("(字符串对比) the str1 is %s, the str2 is %s \n",str1, str2);
	printf("excute strcmp(str1,str2) is %d", strcmp(str1,str2));

	// 获取第一次出现的位置
	printf("\n");
	printf("the str1 is %s \n", str1);
	char* cp = strchr(str1, 's');
	printf("excute strchr(str1, 's') is %p , value is %c\n",cp, *cp );

	// 返回一个字符串第一次出现的位置
	printf("\n");
	printf("the str1 is %s, the str2 is %s \n",str1, str2);
	char* sp = strstr(str2, str1);
	printf("excute strstr(str2, str1) is %p valus is %c \n", sp ,*sp);
}