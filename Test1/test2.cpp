#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a=0;
	int b=0;
	int sum=0;
	scanf("%d %d", &a, &b);\\用scanf时需要取地址，将输入的数字放入&地址中
	sum = a+b;
	printf("sum=%d\n",sum);
	return 0;
}
