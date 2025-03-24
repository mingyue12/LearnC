#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <windows.h>
#include "mymath.h"



int main()
{
	
	int a, b;
	while (scanf_s("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
		// 64 位输出请用 printf("%lld") to 
		printf("%d\n", a + b);
	}
	

	system("pause");
	return 0;
}
