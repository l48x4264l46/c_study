# include<stdio.h>


/**�������*/
void arrayOpt(void);

int main()
{
	arrayOpt();
}

void arrayOpt(void)
{
	// ���������
	int arrayA[10];
	double arrayB[5];

	// ��ʼ������
	int arrayC[5] = {1, 2, 3, 4, 5};

	double arrayD[3] = { 1.2, 2.2, 3.3 };

	// �����鸳ֵ
	arrayC[1] = 0;
	arrayD[2] = 3.4;

	// ��������
	printf("��ʼ��ӡ����\n");
	for (int i = 0;i < 5; i++)
	{
		printf("array[%d] = %d\n",i , arrayC[i]);
	}
}