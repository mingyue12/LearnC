#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "add.h"

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

int main()
{
    int len = strlen("hello");
    int a = 10;
    int b = 20;
	len = Add(a, b);
    printf("%d\n", len); // 5
    system("pause");
    return 0;
}
