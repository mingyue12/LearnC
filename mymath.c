#include<stdbool.h>

int Add(int a, int b)	//两数之和函数的定义
{
	return a + b;
}

bool is_prime(int n) // 判断一个数是否是素数
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

int Fib(int n)	//斐波那契数列
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
	}*/ //递归实现
}

void Swap(int* a, int* b)	//交换两个数
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int fac(int n)	//求阶乘
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

int my_strlen(char* str)	//计算字符串长度
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

bool is_year(int year) // 判断是不是闰年 规则1：年份能被4整除但不能被100整除；规则2：年份能被400整除
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

int binary_search(int arr[], int n, int key) // 二分查找
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

void print_int(int num)	//递归打印整数的每一位
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}