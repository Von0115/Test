#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//注意：1.尽量不要在for循环体内改变循环变量，防止for循环失去控制
	//      2.for语句中的控制变量尽量采取“前闭后开”    for(i=0;i<10;i++) 这样的程序风格更具易读性。
	//例1
	int i = 0;
	//   初始化  判断   调整
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d", i);      //12346789,不会进入死循环，for中的continue会进去调整部分，不会再次进行初始化和判断。
	}
	//例2
	int a = 0;
	int b = 0;
	for (a = 0, b = 0; b = 0; a++, b++)     //b=0是判断部分，是赋值符号不是==，b=0为假，例2根本不执行
		b++;
   return 0;
}