#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*int i = 0;
	int n = 0;
	int a = 1;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		a = a * i;
		
	}
	printf("n的阶乘=%d", a);*/           //n的阶乘
	int i = 0;
	int n = 0;
	int a = 1;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		
		a = a * i;
		sum = sum + a;
		
	}
	printf("%d", sum);            //0到n的阶乘之和
   return 0;
}