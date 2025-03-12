#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "mymath.h"





int main()
{
	int num = 0;
	int n = 0;
	scanf_s("%d", &n);
	num = Fib(n);
	printf("%d\n", num);



	system("pause");
	return 0;
}
