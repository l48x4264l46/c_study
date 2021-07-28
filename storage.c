#include <stdio.h>

/**
自减方法
（在前面定义之后就不用将方法写在main方法之前了）

*/
void subSelf(void);

/**全局static变量*/
static outsideVar = 10;

int storage_main()
{
	/*
	Auto存储类:
		是所有局部变量默认的存储位置
	*/

	int a = 0;
	auto int b = 0;

	// 上面定义的两个类型相同的变量，只不过auto修饰的是局部变量

	/*
	Register存储类：
		这类定义的存储类存储在寄存器中，而不是内存中，所以它没有内存位置，所以不能使用&等操作符
	*/

	register int c = 0;

	/*
	static储存类：
		指示编译器在生命周期内保持局部变量的存在，在进入和离开所在作用域的时候不会进行创建和销毁
		所以static适合在函数调用之间保持局部变量的值。
		static也可以作用与全局变量中，那么他的生命周期就是该文件内。
		被static申明的全局变量可以别任何的函数或者方法调用
	*/

	while (outsideVar--)
	{
		printf("current outsideVar's value is %lu \n", outsideVar);
		subSelf();
	}

	return 0;
}

/**自减方法*/
void subSelf(void)
{
	/**方法体内的static变量*/
	// 只会做一次初始化
	static int insideVar = 5;

	insideVar++;

	printf("current insideVar's value is %lu  \n", insideVar);
}