# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>


// �������ö��ʱ������ʹ��define�����峣��
/*
# define MON 1;
# define TUE 2;
# define WEN 3;
# define THU 4;
# define FRI 5;
# define SAT 6;
# define SUM 7;
*/

int enum_main()
{
	// ����һ��ö��
	enum DAY
	{
		MON = 1,
		TUE,
		WED,
		THU,
		FRI,
		SAT,
		SUN
	};


	// ����һ��ö�ٱ���
	enum Day day;

	day = MON;

	printf("the enum day value is %d \n",day);

	
	// ʹ��switch case 
	printf("����day of week \n");
	enum Day favoriteDay;
	
	scanf("%u", &favoriteDay);

	switch (favoriteDay)
	{
	case MON:
		printf("��һ");
		break;
	case THU:
		printf("�ܶ�");
		break;
	case WED:
		printf("����");
		break;
	case TUE:
		printf("����");
		break;
	case FRI:
		printf("����");
		break;
	case SAT:
		printf("����");
		break;
	case SUN:
		printf("����");
		break;
	default:
		printf("δ֪");
		break;
	}

	printf("\n");

	// ����תΪö��
	enum colors 
	{
		RED,
		YELLOW,
		BLUE,
		GREEN
	} favoriteColor;

	int a = 0;
	favoriteColor = (enum  colors) a;
	printf("transfer int to enums,the result is %d ", favoriteColor);
}