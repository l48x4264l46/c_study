# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>


// 如果不用枚举时，可以使用define来定义常量
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
	// 定义一个枚举
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


	// 定义一个枚举变量
	enum Day day;

	day = MON;

	printf("the enum day value is %d \n",day);

	
	// 使用switch case 
	printf("输入day of week \n");
	enum Day favoriteDay;
	
	scanf("%u", &favoriteDay);

	switch (favoriteDay)
	{
	case MON:
		printf("周一");
		break;
	case THU:
		printf("周二");
		break;
	case WED:
		printf("周三");
		break;
	case TUE:
		printf("周四");
		break;
	case FRI:
		printf("周五");
		break;
	case SAT:
		printf("周六");
		break;
	case SUN:
		printf("周日");
		break;
	default:
		printf("未知");
		break;
	}

	printf("\n");

	// 整数转为枚举
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