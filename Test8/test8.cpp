#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define  ADD(x,y) x+y
int main()
{
	printf("%d\n", ADD(2, 3));   //5
	printf("%d\n", 4*ADD(2, 3)); //8
   return 0;
}                  
//����Ϊ#define  ADD(x,y) ((x)+(y))
//printf("%d\n", 4 * ADD(2, 3))�����ֵ��Ϊ20