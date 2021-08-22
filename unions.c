#include<stdio.h>

/**
结构体与共用体的区别：
结构体创建之后，每个类型都需要内存。
而联合体则不同，它只会使用其中的一种数据类型
如果现在有两种数据结构，根据不同的情况
来使用不同的类型，那么共用体将会比结构体
更加节省内存（当前只会存在一种结构）
*/

/**定义一个共用体*/
union Data
{
	int d1;
	long long d2;
};

int union_main(void)
{
	union Data data;
	printf("before set value the size is %d \n",sizeof(data));
	data.d1 = 1;
	printf("the union data size is %d \n ",sizeof(data));

	data.d2 = 1;
	printf("the union data size is %d \n",sizeof(data));


	return 0;
}

