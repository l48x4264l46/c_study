# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


/**��ͨif else �ж�*/
void normalIf(void);

/**switch case ���*/
void switchCase(void);

int decision_main()
{
	normalIf();
}

void normalIf(void)
{
	int num;
	int num2;
	printf("����һ�����֣������ж���ż��\n");


	scanf("%d", &num);


	// ʹ�� if else
	if (num % 2)
	{
		printf("����\n");
	}
	else
	{
		printf("ż��\n");
	}

	// ʹ����Ŀ
	printf("��Ŀ�����%s \n", num % 2 ? "����" : "ż��");

	printf("����һ�����֣��������жϲ�������\n");
	
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

	printf("�������\n");
}

void switchCase(void)
{
	int num;
	printf("����һ�����֣�3~7������������һ������\n");

	scanf("%d", &num);

	switch (num) 
	{
	case 3:
		printf("����");
		break;
	case 4:
		printf("����");
		break;
	case 5:
		printf("����");
		break;
	case 6:
		printf("����");
		break;
	case 7:
		printf("����");
		break;
	case 8:
		printf("�ܰ�");
		break;
	default:
		break;
	}
}
