# include <stdio.h>

/**重置方法*/
void resetValue(void);

/**算数运算符*/
void calcOperator(void);

/**关系运算符*/
void relationOperator();

/**逻辑运算符*/
void logicOpetator();

/**位运算*/
void bitOpetator();

/**赋值运算*/
void giveOperator();

/**其他运算*/
void otherOperator(void);

int a = 1;
int b = 2;

int operatort_main()
{
	otherOperator();
}

void calcOperator(void)
{
	// 定义两个数
	printf("a's value is %d \n", a);
	printf("b's value is %d \n", b);

	// 相加
	printf("a + b is %d \n", a + b);

	// 相减
	printf("a - b is %d \n", a - b);

	// 相乘
	printf("a * b is %d \n", a * b);

	// 除法
	double divResult = (double)(b / a);
	printf("b / a is  %f \n", divResult);

	// 取模
	printf("b mo a is %d \n", b % a);

	// 自增
	a++;
	printf("a ++ is %d \n", a);

	// 自减
	b--;
	printf("b-- is %d \n", b);

	// 自增
	printf("++a is %d \n", ++a);

	// 自减
	printf("--b is %d \n", --b);
}

void relationOperator(void)
{
	// 相等 == 
	printf("a == b is %s \n",a == b ? "true" : "false");

	// 不等 != 
	printf("a != b is %s \n", b != a ? "true" : "false");

	// 大于 >
	printf("a > b is %s \n", a > b ? "true" : "false");

	// 小于 <
	printf("a < b is %s \n", a < b ? "true" : "false");

	// 大于等于 >=
	printf("a >= b is %s \n", a >= b ? "true" : "false");

	// 小于等于
	printf("a <= b is %s \n", a <= b ? "true" : "false");
}

void logicOpetator()
{
	// 与
	printf("a && b is %s \n", a && b ? "true" : "false");

	// 或
	printf("a || b is %s \n", a || b ? "true" : "false");

	// 非
	printf("!(a && b) is %s \n", !(a && b) ? "true" : "false");
}

void bitOpetator()
{
	//与  & (按二进制，如果都为1 才是 1 ，比如: 00001 & 00001 = 00001 000000 & 111111  = 000000)
	printf("a(0001) and  b(0010) is %d \n", a & b);

	//或 | (按二进制，如果有一个为1，则为1比如：0001 | 1100 = 1101)
	printf("a(0001) or b(0010) is %d \n", a | b);

	//异或 ^ (按二进制，相同则为 0，不同则为 1，比如：0001 & 1111 = 1110)
	printf("a(0001) not b(0010) is %d \n", a ^ b);

	// 取反 ~ (按二进制，将0变1，1变0 )
	printf("a(0001) is %d \n", ~a);

	// 左位移 << （按二进制，将所有的符号都向左侧移动，右侧补0）
	printf("a(0001) << b(0010) is %d \n", a << b);

	// 右位移 >> (按二进制，将所有的符号都向右侧移动，左侧正数补充0，负数补1,右侧的丢弃)
	printf("a(001) >> b(0010) is %d \n", a >> b);
}

void giveOperator(void)
{
	// = 简单的赋值 把右边的值赋值给左边的变量
	a = b;
	printf("a = b,then a's value is %d \n", a);
	resetValue();

	// += 加且赋值运算符
	a += b;
	printf("a(1) += b(2) is %d \n", a);
	resetValue();

	// -= 相减并且赋值
	a -= b;
	printf("a(1) -= b(2) is %d \n", a);
	resetValue();

	// *= 相乘并且赋值
	a *= b;
	printf("a(1) *= b(2) is %d \n", a);
	resetValue();

	// /= 并且赋值
	float temp_a = 1;
	float temp_b = 2;
	temp_a /= temp_b;
	printf("a /= b is %f \n", temp_a);

	// %= 取模并且赋值
	a %= b;
	printf("a(1) %= b(2) is %d \n", a);
	resetValue();

	// <<= 左位移并且赋值
	a <<= b;
	printf("a(1) <<= b(2) is %d \n", a);
	resetValue();

	// >>= 右位移并且赋值
	a >>= b;
	printf("a(1) >>= b(2) is %d \n", a);
	resetValue();

	// &= 与操作之后赋值
	a &= b;
	printf("a(1) &= b is %d \n", a);
	resetValue();

	// ^= 异或操作之后赋值
	a ^= b;
	printf("a(1) ^= b(2) is %d \n", a);
	resetValue();

	// |= 或操作之后赋值
	a |= b;
	printf("a(1) |= b(2) is %d \n", a);
}

void otherOperator(void)
{
	// sizeof() 返回变量的大小
	int c = 1;
	float d = 2;
	double e = 3;
	long f = 4;
	char g = 'a';

	int* ptr;

	printf("sizeof(c(int)) is %d \n", sizeof(c));
	printf("sizeof(d(float)) is %d \n", sizeof(d));
	printf("sizeof(e(double)) is %d \n", sizeof(e));
	printf("sizeof(f(long)) is %d \n", sizeof(f));
	printf("sizeof(g(char)) is %d \n", sizeof(g));

	// & 变量的地址
	ptr = &a;
	printf("*ptr address is %p \n", ptr);
	printf("a value is %d \n", a);

	// 三元运算符
	printf("a == b ? true : false is %s \n", a == b ? "true" : "false");
}

void resetValue(void)
{
	a = 1;
	b = 2;
}


