#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0'};
	printf("%d\n", strlen(arr1));   //3
	printf("%d\n", strlen(arr2));   //随机
	printf("%d\n", strlen(arr3));   //3
	//计算字符串长度时，遇到\0，才停止，否则一直往后读取数据。arr1自带\0，定义arr2，一个个枚举时不自带\0
   return 0;
}