# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


/**普通if else 判断*/
void normalIf(void);

/**switch case 语句*/
void switchCase(void);

int decision_main()
{
	normalIf();
}

void normalIf(void)
{
	int num;
	int num2;
	printf("输入一个数字，将会判断奇偶数\n");


	scanf("%d", &num);


	// 使用 if else
	if (num % 2)
	{
		printf("奇数\n");
	}
	else
	{
		printf("偶数\n");
	}

	// 使用三目
	printf("三目结果：%s \n", num % 2 ? "奇数" : "偶数");

	printf("输入一个数字，将用来判断布尔类型\n");
	
	while (1)
	{
		scanf("%d", &num2);

		if (-1 == num2)
		{
			break;
		}

		if (num2)
		{
			printf("true \n");
		}
		else
		{
			printf("false \n");
		}
	}

	printf("程序结束\n");
}

void switchCase(void)
{
	int num;
	printf("输入一个数字（3~7），将会生成一个人名\n");

	scanf("%d", &num);

	switch (num) 
	{
	case 3:
		printf("张三");
		break;
	case 4:
		printf("李四");
		break;
	case 5:
		printf("王五");
		break;
	case 6:
		printf("赵六");
		break;
	case 7:
		printf("孙七");
		break;
	case 8:
		printf("周八");
		break;
	default:
		break;
	}
}
