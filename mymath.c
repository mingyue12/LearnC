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

int Fib(int n)	//쳲���������
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

void Swap(int* a, int* b)	//����������
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int fac(int n)	//��׳�
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * fac(n - 1);
	}
}

int my_strlen(char* str)	//�����ַ�������
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

bool is_year(int year) // �ж��ǲ������� ����1������ܱ�4���������ܱ�100����������2������ܱ�400����
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int binary_search(int arr[], int n, int key) // ���ֲ���
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return -1;
}

void print_int(int num)	//�ݹ��ӡ������ÿһλ
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}