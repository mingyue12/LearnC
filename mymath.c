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

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;

	/*if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}*/ //�ݹ�ʵ��
}