# include <stdio.h>

/**���÷���*/
void resetValue(void);

/**���������*/
void calcOperator(void);

/**��ϵ�����*/
void relationOperator();

/**�߼������*/
void logicOpetator();

/**λ����*/
void bitOpetator();

/**��ֵ����*/
void giveOperator();

/**��������*/
void otherOperator(void);

int a = 1;
int b = 2;

int operatort_main()
{
	otherOperator();
}

void calcOperator(void)
{
	// ����������
	printf("a's value is %d \n", a);
	printf("b's value is %d \n", b);

	// ���
	printf("a + b is %d \n", a + b);

	// ���
	printf("a - b is %d \n", a - b);

	// ���
	printf("a * b is %d \n", a * b);

	// ����
	double divResult = (double)(b / a);
	printf("b / a is  %f \n", divResult);

	// ȡģ
	printf("b mo a is %d \n", b % a);

	// ����
	a++;
	printf("a ++ is %d \n", a);

	// �Լ�
	b--;
	printf("b-- is %d \n", b);

	// ����
	printf("++a is %d \n", ++a);

	// �Լ�
	printf("--b is %d \n", --b);
}

void relationOperator(void)
{
	// ��� == 
	printf("a == b is %s \n",a == b ? "true" : "false");

	// ���� != 
	printf("a != b is %s \n", b != a ? "true" : "false");

	// ���� >
	printf("a > b is %s \n", a > b ? "true" : "false");

	// С�� <
	printf("a < b is %s \n", a < b ? "true" : "false");

	// ���ڵ��� >=
	printf("a >= b is %s \n", a >= b ? "true" : "false");

	// С�ڵ���
	printf("a <= b is %s \n", a <= b ? "true" : "false");
}

void logicOpetator()
{
	// ��
	printf("a && b is %s \n", a && b ? "true" : "false");

	// ��
	printf("a || b is %s \n", a || b ? "true" : "false");

	// ��
	printf("!(a && b) is %s \n", !(a && b) ? "true" : "false");
}

void bitOpetator()
{
	//��  & (�������ƣ������Ϊ1 ���� 1 ������: 00001 & 00001 = 00001 000000 & 111111  = 000000)
	printf("a(0001) and  b(0010) is %d \n", a & b);

	//�� | (�������ƣ������һ��Ϊ1����Ϊ1���磺0001 | 1100 = 1101)
	printf("a(0001) or b(0010) is %d \n", a | b);

	//��� ^ (�������ƣ���ͬ��Ϊ 0����ͬ��Ϊ 1�����磺0001 & 1111 = 1110)
	printf("a(0001) not b(0010) is %d \n", a ^ b);

	// ȡ�� ~ (�������ƣ���0��1��1��0 )
	printf("a(0001) is %d \n", ~a);

	// ��λ�� << ���������ƣ������еķ��Ŷ�������ƶ����Ҳಹ0��
	printf("a(0001) << b(0010) is %d \n", a << b);

	// ��λ�� >> (�������ƣ������еķ��Ŷ����Ҳ��ƶ��������������0��������1,�Ҳ�Ķ���)
	printf("a(001) >> b(0010) is %d \n", a >> b);
}

void giveOperator(void)
{
	// = �򵥵ĸ�ֵ ���ұߵ�ֵ��ֵ����ߵı���
	a = b;
	printf("a = b,then a's value is %d \n", a);
	resetValue();

	// += ���Ҹ�ֵ�����
	a += b;
	printf("a(1) += b(2) is %d \n", a);
	resetValue();

	// -= ������Ҹ�ֵ
	a -= b;
	printf("a(1) -= b(2) is %d \n", a);
	resetValue();

	// *= ��˲��Ҹ�ֵ
	a *= b;
	printf("a(1) *= b(2) is %d \n", a);
	resetValue();

	// /= ���Ҹ�ֵ
	float temp_a = 1;
	float temp_b = 2;
	temp_a /= temp_b;
	printf("a /= b is %f \n", temp_a);

	// %= ȡģ���Ҹ�ֵ
	a %= b;
	printf("a(1) %= b(2) is %d \n", a);
	resetValue();

	// <<= ��λ�Ʋ��Ҹ�ֵ
	a <<= b;
	printf("a(1) <<= b(2) is %d \n", a);
	resetValue();

	// >>= ��λ�Ʋ��Ҹ�ֵ
	a >>= b;
	printf("a(1) >>= b(2) is %d \n", a);
	resetValue();

	// &= �����֮��ֵ
	a &= b;
	printf("a(1) &= b is %d \n", a);
	resetValue();

	// ^= ������֮��ֵ
	a ^= b;
	printf("a(1) ^= b(2) is %d \n", a);
	resetValue();

	// |= �����֮��ֵ
	a |= b;
	printf("a(1) |= b(2) is %d \n", a);
}

void otherOperator(void)
{
	// sizeof() ���ر����Ĵ�С
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

	// & �����ĵ�ַ
	ptr = &a;
	printf("*ptr address is %p \n", ptr);
	printf("a value is %d \n", a);

	// ��Ԫ�����
	printf("a == b ? true : false is %s \n", a == b ? "true" : "false");
}

void resetValue(void)
{
	a = 1;
	b = 2;
}


