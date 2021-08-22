# include <stdio.h>


/**����һ���˶���*/
struct Person
{
	char name[50];
	int age;
};

/**����һ��û�����͵�book����*/
struct 
{
	char name[50];
	char author[50];
} book;

/**ʹ��typdef�����µ�����*/
typedef struct Demo
{
	int a;
	int b;
};


/**����һ�������ṹ��*/
struct Complex
{
	char name[10];
	struct Demo demos;
};

/**����һ��ָ���Լ���ָ���Լ�ָ��������ָ��*/
struct Node
{
	char value[10];
	struct Node* next;
	struct Complex* c;
};

/**�໥��������Ҫ�ȶ���*/
// �ȶ���A
struct A;

// �ٶ���B
struct B
{
	// ��������������� ��Ҫʹ��ָ�� ������ֱ�ӵ���������
	struct A* a;
};

struct A
{
	// ������Ѿ�ȷ�������ͣ������ʹ�ñ���������ָ��
	struct B b;
};

/**�����ͬʱ���г�ʼ��*/
struct InitBooks
{
	char bookName[6];
	int total;
} books = { "world", 100};

/**��ʼ���ṹ*/
void initStruct(void);

/**���ñ���*/
void callProperty();

/**��ӡperson�ṹ*/
void printPersonStruct(struct Person*);

/**�ṹָ��*/
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
	// ���������ṹ
	struct Person zhangsan;
	struct Person lisi;


	// ��ʼ���ṹ������
	strcpy(zhangsan.name ,"����");
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
	
	strcpy(p1.name, "����");
	p1.age = 20;

	strcpy(p2.name, "����");
	p2.age = 30;

	printPersonStruct(&p1);
	printPersonStruct(&p2);
}

