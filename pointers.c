# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int static result;

/**��������*/
void baseOpt(void);

/**ָ����������*/
void pointerAtc(void);

/**ָ������*/
void pointerArray(void);

/**ָ���ָ��*/
void pointer2pointer(void);

/**ָ�����*/
void pointerParmeter(void);

/**��������Ϊ��ǰʱ��*/
void change2CruuentTime(unsigned long*);

/*���������ƽ����*/
double calcArrayAvg(int* ,int);

/**����һ�������*/
int* newRandomNum(void);

/**��ָ����Ϊ�Ż�ֵ*/
void pointerReturn(void);

/**��ȡ���ֵ*/
int getMax(int, int);

/**����ָ��*/
void pointerFunction(void);
int pointer_main()
{
	
	pointerFunction();

	return 0;
}

void baseOpt(void)
{
	// ����һ������
	int	a = 10;

	// ����һ��ָ��
	int* p;

	// ��ָ��ָ������������ڴ��ַ
	p = &a;

	// ��ӡ�ñ����ڴ��λ��
	printf("a variable's address id %p\n", p);


	// ָ�붨����Ҫ������������ƥ��
	int* intP;
	double* doubleP;
	float* floatP;
	char* charP;
	long* longP;

	// ָ���ʹ��
	int tempVar = 10;
	int* tempVarP;
	tempVarP = &tempVar;

	printf("the variable tempvar's address is %p\n", &tempVar);
	printf("the printer tempVarP's address is %p\n", tempVarP);
	printf("the printer's value is %d\n", *tempVarP);

	// ��ʼ��һ���յ�ָ��
	int* nullPoniter = NULL;
	printf("the null pointer's address is  %p\n", nullPoniter);

	if (!nullPoniter) {
		printf("is a null pointer\n");
	}
}

void pointerAtc(void)
{
	printf("int sizof is %d\n", sizeof(int));
	// ����һ������
	int  collection[] = {1, 20, 500, 4, 20};

	// ����һ��ָ��
	int* arrayP;

	// ��ָ��ָ������ĵ�һ��Ԫ��
	arrayP = &collection;

	// �������
	for (int i = 0; i < 5; i++, arrayP++)
	{
		printf("the pointer's address is  %p\n", arrayP);
		printf("the pointer's value is %d\n", *arrayP);
	}

	// ǰ���Ѿ��������ָ��������ˣ������ǿ���֪��ָ����������һ����ַ��
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
	// *var��ʾ��ǰ��ַ��ֵ����������*var�������� var,����õ���var���Ǿͱ�ʾ��ָ��ָ���˱�ĵ�ַ
	*var = time(NULL);

	// ���ʹ�ø�ֵ
	//var = time(NULL);
	// ����ǲ�����ı䴫�������ֵ����Ϊ�������βΡ�
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
	// �ֲ���������ջ�ڴ��У�����ִ�����֮�󽫱��ͷţ�������Ҫʹ�þ�̬��������̬�����洢��ר�ŵľ�̬����
	//static 

	// ��������(��ʹ����ʱ����Ϊ����������)
	srand((unsigned) time (NULL));

	// ����һ�������
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
		// ��ȡһ�������
		int* newNumPointer = newRandomNum();

		// ��Ϊ5��ѭ���ܿ���ܽ�������ʱ���޷���ͣ�̣߳�����ʹ��scanf���뵱���߳���ͣ
		printf("����һ��������Ϊ��ͣ�߳�ʹ�� \n");
		scanf("%d", &key);

		// ��������
		printf("the random num is %d \n", *newNumPointer);

		// ������ֻ��ӡ5������
		i++;
	}
}

int getMax(int a, int b)
{
	return a > b ? a : b;
}

void pointerFunction(void)
{
	// ����һ������ָ��
	int(*p)(int, int) = &getMax;

	// �������������
	int a, b, c;
	
	printf("������Ҫ�Ƚϵ���������\n");
	scanf("%d %d %d", &a, &b, &c);

	// �������ֵ
	printf("���ֵΪ%d \n", p(p(a, b) ,c));
}