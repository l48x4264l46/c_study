# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

/**while循环*/
void whileLoop(void);

/**for循环*/
void forLoop(void);

/**do while 循环*/
void doWhileLoop(void);

int lopp_main()
{
	forLoop();
}

void whileLoop(void)
{
	int num;
	printf("输入一个数字，将会循环打印输入的次数\n");

	while (1) 
	{
		scanf("%d", &num);

		if (num < 0)
		{
			printf("循环次数不可以为负数，程序退出。\n");
			break;
		}

		while (num > 0) {
			printf("打印剩余次数%d \n", --num);
		}
	}
}

void forLoop(void)
{
	int num = 0;
	while (1) 
	{
		printf("输入一个层高，将会打印金字塔\n");
		scanf("%d", &num);

		if (num < 0) {
			printf("楼层不允许为负数，程序退出。\n");
			break;
		}

		// 计算最后一排需要的个数
		int firstFloorCount = 2 * num - 1;

		// 第一排空白符数量
		int lastBlankCount = firstFloorCount / 2;

		for (int i = 1; i <= num; i++) 
		{
			// 打印空白符
			int currentBlankCount = lastBlankCount - i + 1;
			do {
				printf("b");
				currentBlankCount--;
			} while (currentBlankCount > 0);

			// 打印楼层
			int currentFloorCount = 2 * i - 1;
			while (currentFloorCount > 0) {
				printf("*");
				currentFloorCount--;
			}

			printf("\n");
		}
	}
}