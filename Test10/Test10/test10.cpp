#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0'};
	printf("%d\n", strlen(arr1));   //3
	printf("%d\n", strlen(arr2));   //���
	printf("%d\n", strlen(arr3));   //3
	//�����ַ�������ʱ������\0����ֹͣ������һֱ�����ȡ���ݡ�arr1�Դ�\0������arr2��һ����ö��ʱ���Դ�\0
   return 0;
}