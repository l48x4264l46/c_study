# include <stdio.h>

/**�ַ����Ķ���*/
void stringDef(void);

/**�ַ����Ĳ���*/
void strOpt(void);

int string_main()
{
	strOpt();
	return 0;
}

void stringDef(void)
{
	// �ֶ�����һ���ַ���
	char hellowWorldArray[12] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0' };

	// β���Զ�����\0
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
	// ���������ַ���
	char str1[] = "this is a string";
	char str2[17];

	// �ַ�������
	printf("the str1 is %s,the str2 is %s \n\n", str1, str2);
	strcpy(str2,str1);
	printf("�������ַ�����after excute strcpy then str2 is %s \n", str2);
	printf("�������ַ�����after excute strcpy then str1 is %s \n", str1);


	// ���������ַ���
	printf("\n");
	printf("(ƴ���ַ���)before excute strcat the str1 is %s ,str2 is %s \n", str1, str2);
	strcat(str1, str2);
	printf("(ƴ���ַ���) after excute strcat the str1 is %s \n", str1);
	
	// �����ַ����ĳ���
	printf("\n");
	printf("(�ַ�������) the str1 is %s \n", str1);
	int len = strlen(str1);
	printf("the str1 length is %d \n", len);

	// �Ƚ������ַ���
	printf("\n");
	printf("(�ַ����Ա�) the str1 is %s, the str2 is %s \n",str1, str2);
	printf("excute strcmp(str1,str2) is %d", strcmp(str1,str2));

	// ��ȡ��һ�γ��ֵ�λ��
	printf("\n");
	printf("the str1 is %s \n", str1);
	char* cp = strchr(str1, 's');
	printf("excute strchr(str1, 's') is %p , value is %c\n",cp, *cp );

	// ����һ���ַ�����һ�γ��ֵ�λ��
	printf("\n");
	printf("the str1 is %s, the str2 is %s \n",str1, str2);
	char* sp = strstr(str2, str1);
	printf("excute strstr(str2, str1) is %p valus is %c \n", sp ,*sp);
}