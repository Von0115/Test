#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 9;
	//int b = a++;   //后置++，先使用，后++   a=10 b=9
	int b = ++a;    //前置++。先++，后使用    a=10 b=10
	printf("%d\n", a);   
	printf("%d\n", b);   

   return 0;
}