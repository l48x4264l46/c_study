#include <stdio.h>

/**
�Լ�����
����ǰ�涨��֮��Ͳ��ý�����д��main����֮ǰ�ˣ�

*/
void subSelf(void);

/**ȫ��static����*/
static outsideVar = 10;

int storage_main()
{
	/*
	Auto�洢��:
		�����оֲ�����Ĭ�ϵĴ洢λ��
	*/

	int a = 0;
	auto int b = 0;

	// ���涨�������������ͬ�ı�����ֻ����auto���ε��Ǿֲ�����

	/*
	Register�洢�ࣺ
		���ඨ��Ĵ洢��洢�ڼĴ����У��������ڴ��У�������û���ڴ�λ�ã����Բ���ʹ��&�Ȳ�����
	*/

	register int c = 0;

	/*
	static�����ࣺ
		ָʾ�����������������ڱ��־ֲ������Ĵ��ڣ��ڽ�����뿪�����������ʱ�򲻻���д���������
		����static�ʺ��ں�������֮�䱣�־ֲ�������ֵ��
		staticҲ����������ȫ�ֱ����У���ô�����������ھ��Ǹ��ļ��ڡ�
		��static������ȫ�ֱ������Ա��κεĺ������߷�������
	*/

	while (outsideVar--)
	{
		printf("current outsideVar's value is %lu \n", outsideVar);
		subSelf();
	}

	return 0;
}

/**�Լ�����*/
void subSelf(void)
{
	/**�������ڵ�static����*/
	// ֻ����һ�γ�ʼ��
	static int insideVar = 5;

	insideVar++;

	printf("current insideVar's value is %lu  \n", insideVar);
}