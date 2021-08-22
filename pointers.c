# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int static result;

/**基础操作*/
void baseOpt(void);

/**指针自增操作*/
void pointerAtc(void);

/**指针数组*/
void pointerArray(void);

/**指针的指针*/
void pointer2pointer(void);

/**指针参数*/
void pointerParmeter(void);

/**更换变量为当前时间*/
void change2CruuentTime(unsigned long*);

/*计算数组的平均数*/
double calcArrayAvg(int* ,int);

/**生成一个随机数*/
int* newRandomNum(void);

/**以指针作为放回值*/
void pointerReturn(void);

/**获取最大值*/
int getMax(int, int);

/**函数指针*/
void pointerFunction(void);
int pointer_main()
{
	
	pointerFunction();

	return 0;
}

void baseOpt(void)
{
	// 定义一个变量
	int	a = 10;

	// 定义一个指针
	int* p;

	// 将指针指向这个变量的内存地址
	p = &a;

	// 打印该变量内存的位置
	printf("a variable's address id %p\n", p);


	// 指针定义需要与具体的类型相匹配
	int* intP;
	double* doubleP;
	float* floatP;
	char* charP;
	long* longP;

	// 指针的使用
	int tempVar = 10;
	int* tempVarP;
	tempVarP = &tempVar;

	printf("the variable tempvar's address is %p\n", &tempVar);
	printf("the printer tempVarP's address is %p\n", tempVarP);
	printf("the printer's value is %d\n", *tempVarP);

	// 初始化一个空的指针
	int* nullPoniter = NULL;
	printf("the null pointer's address is  %p\n", nullPoniter);

	if (!nullPoniter) {
		printf("is a null pointer\n");
	}
}

void pointerAtc(void)
{
	printf("int sizof is %d\n", sizeof(int));
	// 定义一个数组
	int  collection[] = {1, 20, 500, 4, 20};

	// 定义一个指针
	int* arrayP;

	// 将指针指向数组的第一个元素
	arrayP = &collection;

	// 遍历输出
	for (int i = 0; i < 5; i++, arrayP++)
	{
		printf("the pointer's address is  %p\n", arrayP);
		printf("the pointer's value is %d\n", *arrayP);
	}

	// 前面已经定义好了指针的类型了，所以是可以知道指针自增的下一个地址的
}
void pointerArray(void)
{
	int intArray[] = { 1, 2, 3, 4, 5 };
	int intArray1[] = {7, 8, 9};
	int* intPointerArray[6];

	for (int i = 0; i < 5; i++)
	{
		intPointerArray[i] = &intArray[i];
	}
	intPointerArray[5] = intArray1;

	printf("start print top 5 pointer array element \n\n");
	for (int i = 0; i < 5; i++)	
	{
		printf("the int array address is %p, value is %d \n", &intArray[i], intArray[i]);
		printf("pointer address is %p, value is %d \n", intPointerArray[i], *intPointerArray[i]);
	}

	printf("\n\n");

	int* newPointer = intPointerArray[5];
	printf("start print the last one array element \n\n");
	for (int i = 0; i < 3; i++, newPointer++)
	{
		printf("the int array address is %p ,value is %d \n", &intArray1[i], intArray1[i]);
		printf("the pointer address is %p, value is %d\n", newPointer, *newPointer);
	}
}

void pointer2pointer(void)
{
	int a = 0;
	int* p1 = &a;
	int** p2 = &p1;
	
	printf("the variable address is %p, value is %d \n", &a, a);
	printf("the pointer is %p, value is %d \n", p1, *p1);
	printf("the poiner to poninter(p) is %p,the p2p address is %p,  value is %d \n", p2, *p2 , **p2);
}

void pointerParmeter(void)
{
	unsigned long a = 0;
	printf("the a variable address is %p, value is %d \n", &a, a);
	printf("call change2CurrentTime fun \n");
	change2CruuentTime(&a);
	printf("after called fun then the a variable address is %p, value is %d \n", &a, a);

	printf("\n \n");
	int arraySize = 3;
	int intArray[3] = { 1, 2, 4 };
	double avg = calcArrayAvg(intArray, arraySize);
	printf("the avg of array is %f \n", avg);
}

void change2CruuentTime(unsigned long* var)
{
	// *var表示当前地址的值，所以是用*var，而不是 var,如果用的是var，那就表示该指针指向了别的地址
	*var = time(NULL);

	// 如果使用赋值
	//var = time(NULL);
	// 结果是并不会改变传入变量的值，因为这里是形参。
}

double calcArrayAvg(int* arrayP, int arraySize)
{
	long totalCount = 0;
	for (int i = 0; i < arraySize; i++) 
	{
		totalCount += *(arrayP + i);
	}

	return (double)totalCount / arraySize;
}

int* newRandomNum(void)
{
	// 局部变量存于栈内存中，函数执行完成之后将被释放，所以需要使用静态变量，静态变量存储在专门的静态区。
	//static 

	// 设置种子(这使用了时间作为随机数如果在)
	srand((unsigned) time (NULL));

	// 返回一个随机数
	int tempNewNumber = rand();
	printf("the new temp number in fun is %d \n", tempNewNumber);

	result = tempNewNumber;

	printf("the new number in result is %d \n", result);

	return &result;
}

void pointerReturn(void)
{
	int i = 0;
	int key;
	while (i < 5)
	{
		// 获取一个随机数
		int* newNumPointer = newRandomNum();

		// 因为5个循环很快就能结束，暂时又无法暂停线程，所以使用scanf输入当作线程暂停
		printf("输入一个数字作为暂停线程使用 \n");
		scanf("%d", &key);

		// 输出随机数
		printf("the random num is %d \n", *newNumPointer);

		// 自增，只打印5个数字
		i++;
	}
}

int getMax(int a, int b)
{
	return a > b ? a : b;
}

void pointerFunction(void)
{
	// 定义一个函数指针
	int(*p)(int, int) = &getMax;

	// 定义输入的数字
	int a, b, c;
	
	printf("输入需要比较的三个数字\n");
	scanf("%d %d %d", &a, &b, &c);

	// 计算最大值
	printf("最大值为%d \n", p(p(a, b) ,c));
}