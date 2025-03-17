#pragma once	//防止头文件重复包含
int Add(int a, int b);	//加法

bool is_prime(int n);	//判断质数

int Fib(int n);	//斐波那契数列

void Swap(int* a, int* b);	//交换两个数

int fac(int n);   //求阶乘

int my_strlen(char* str);	//计算字符串长度

bool is_year(int year); // 判断是不是闰年 规则1：年份能被4整除但不能被100整除；规则2：年份能被400整除

int binary_search(int arr[], int n, int key); // 二分查找

void print_int(int num);	//递归打印整数的每一位

void bubble_sort(int arr[],int sz); // 冒泡排序