#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char str[] = "hello bit";
	//[hello bit\0] 
	printf("%d %d\n", sizeof(str),strlen(str));
	//10 9
	//strlen -- 函数 -- 求字符串长度的，找\0之前出现的字符个数,\0是结束的标志
	//sizeof -- 操作符 -- 计算变量/类型所占内存大小，单位是字节
    return 0;
}