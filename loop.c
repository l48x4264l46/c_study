# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

/**whileѭ��*/
void whileLoop(void);

/**forѭ��*/
void forLoop(void);

/**do while ѭ��*/
void doWhileLoop(void);

int lopp_main()
{
	forLoop();
}

void whileLoop(void)
{
	int num;
	printf("����һ�����֣�����ѭ����ӡ����Ĵ���\n");

	while (1) 
	{
		scanf("%d", &num);

		if (num < 0)
		{
			printf("ѭ������������Ϊ�����������˳���\n");
			break;
		}

		while (num > 0) {
			printf("��ӡʣ�����%d \n", --num);
		}
	}
}

void forLoop(void)
{
	int num = 0;
	while (1) 
	{
		printf("����һ����ߣ������ӡ������\n");
		scanf("%d", &num);

		if (num < 0) {
			printf("¥�㲻����Ϊ�����������˳���\n");
			break;
		}

		// �������һ����Ҫ�ĸ���
		int firstFloorCount = 2 * num - 1;

		// ��һ�ſհ׷�����
		int lastBlankCount = firstFloorCount / 2;

		for (int i = 1; i <= num; i++) 
		{
			// ��ӡ�հ׷�
			int currentBlankCount = lastBlankCount - i + 1;
			do {
				printf("b");
				currentBlankCount--;
			} while (currentBlankCount > 0);

			// ��ӡ¥��
			int currentFloorCount = 2 * i - 1;
			while (currentFloorCount > 0) {
				printf("*");
				currentFloorCount--;
			}

			printf("\n");
		}
	}
}