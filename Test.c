#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "mymath.h"

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

void print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
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

int count = 0;

int Fib(int n)
{
	if (n == 3)
	{
		count++;
	}

	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}

int main()
{
	int num = 0;
	int n = 0;
	scanf_s("%d", &n);
	num = Fib(n);
	printf("%d\n", num);
	printf("%d", count);
	system("pause");
	return 0;

}
