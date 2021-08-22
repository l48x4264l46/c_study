# include <stdio.h>


/**定义一个人对象*/
struct Person
{
	char name[50];
	int age;
};

/**定义一个没有类型的book变量*/
struct 
{
	char name[50];
	char author[50];
} book;

/**使用typdef创建新的类型*/
typedef struct Demo
{
	int a;
	int b;
};


/**包好一个其他结构体*/
struct Complex
{
	char name[10];
	struct Demo demos;
};

/**包含一个指向自己的指针以及指向其他的指针*/
struct Node
{
	char value[10];
	struct Node* next;
	struct Complex* c;
};

/**相互包含的需要先定义*/
// 先定义A
struct A;

// 再定义B
struct B
{
	// 如果是声明的类型 需要使用指针 而不是直接的数据类型
	struct A* a;
};

struct A
{
	// 如果是已经确定的类型，则可以使用变量而不是指针
	struct B b;
};

/**定义的同时进行初始化*/
struct InitBooks
{
	char bookName[6];
	int total;
} books = { "world", 100};

/**初始化结构*/
void initStruct(void);

/**调用变量*/
void callProperty();

/**打印person结构*/
void printPersonStruct(struct Person*);

/**结构指针*/
void structPointer(void);

int struct_main()
{
	structPointer();
}

void initStruct(void)
{
	printf("the InitBookStruct is: bookName: %s, total %d \n",books.bookName , books.total);
}

void callProperty(void)
{
	// 定义两个结构
	struct Person zhangsan;
	struct Person lisi;


	// 初始化结构的内容
	strcpy(zhangsan.name ,"张三");
	zhangsan.age = 10;

	char lisiNameArray[] = "lisi";
	strcpy(lisi.name, lisiNameArray);
	lisi.age = 20;

	printf("zhangsan:{name : %s, age : %d} \n",zhangsan.name, zhangsan.age);
}

void printPersonStruct(struct Person* p)
{
	printf("persion:{name : %s, age : %d}\n", p->name, p->age);
}

void structPointer(void)
{
	struct Person p1;
	struct Person p2;
	
	strcpy(p1.name, "张三");
	p1.age = 20;

	strcpy(p2.name, "李四");
	p2.age = 30;

	printPersonStruct(&p1);
	printPersonStruct(&p2);
}

