#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{   //32位有2的32次方个内存单元（每个内存单元的编号都是32位2进制数），64位有2的64次方个内存单元（同左）
	//一个内存单元可以存放1字节的数据
	//地址（内存单元编号）是存放数据的地方的编号，指针变量是存放地址的
	//指针就是地址
	int a = 10;
	int* pa = &a;         //*说明pa是指针变量，int说明pa执行的对象是int类型
	printf("%p\n", &a);   //%p用来打印地址,结果是a的第一个字节的地址
	//sizeof计算操作数的类型的长度（单位字节），以下打印的都是地址，其结果取决于地址（内存单元编号）所占的长度
	                                  //32位   64位
	printf("%d\n", sizeof(int*));      //4      8
	printf("%d\n", sizeof(char*));     //4      8
	printf("%d\n", sizeof(long*));     //4      8
	printf("%d\n", sizeof(short*));    //4      8
	printf("%d\n", sizeof(float*));    //4      8
	//eg:
	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", &ch);
	//eg:
	int b = 10;
	int* pb = &b;
	*pb = 66;               //*是解引操作符，*通过地址找到b
	printf("%d\n", b);      //输出66

   return 0;
}