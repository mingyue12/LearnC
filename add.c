#include<stdbool.h>

int Add(int a, int b)	//����֮�ͺ����Ķ���
{
	return a + b;
}

bool is_prime(int n) // �ж�һ�����Ƿ�������
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}

	return 1;
}