#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 9;
	//int b = a++;   //����++����ʹ�ã���++   a=10 b=9
	int b = ++a;    //ǰ��++����++����ʹ��    a=10 b=10
	printf("%d\n", a);   
	printf("%d\n", b);   

   return 0;
}