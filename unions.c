#include<stdio.h>

/**
�ṹ���빲���������
�ṹ�崴��֮��ÿ�����Ͷ���Ҫ�ڴ档
����������ͬ����ֻ��ʹ�����е�һ����������
����������������ݽṹ�����ݲ�ͬ�����
��ʹ�ò�ͬ�����ͣ���ô�����彫��Ƚṹ��
���ӽ�ʡ�ڴ棨��ǰֻ�����һ�ֽṹ��
*/

/**����һ��������*/
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

