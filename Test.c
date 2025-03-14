#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <windows.h>
#include "mymath.h"



int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
