#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "add.h"

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
