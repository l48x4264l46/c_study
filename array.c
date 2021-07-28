# include<stdio.h>


/**数组操作*/
void arrayOpt(void);

int main()
{
	arrayOpt();
}

void arrayOpt(void)
{
	// 数组的声明
	int arrayA[10];
	double arrayB[5];

	// 初始化数组
	int arrayC[5] = {1, 2, 3, 4, 5};

	double arrayD[3] = { 1.2, 2.2, 3.3 };

	// 给数组赋值
	arrayC[1] = 0;
	arrayD[2] = 3.4;

	// 遍历数组
	printf("开始打印数组\n");
	for (int i = 0;i < 5; i++)
	{
		printf("array[%d] = %d\n",i , arrayC[i]);
	}
}