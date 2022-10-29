#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	printf("%c%c%c\n", '\103', '\152', '\153');   //%c为字符  \ddd为1~3位8进制数，位权展开转换为10进制数后查Ascii表 结果Cjk
	printf("%d\n", strlen("abcdef"));        //6
	printf("%d\n", strlen("c:\test\628\test.c"));    //14
	printf("c:\\test\\628\\test.c");     //c:\test\628\test.c
   return 0;
}