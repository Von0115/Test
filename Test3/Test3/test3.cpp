#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	printf("%c%c%c\n", '\103', '\152', '\153');   //%cΪ�ַ�  \dddΪ1~3λ8��������λȨչ��ת��Ϊ10���������Ascii�� ���Cjk
	printf("%d\n", strlen("abcdef"));        //6
	printf("%d\n", strlen("c:\test\628\test.c"));    //14
	printf("c:\\test\\628\\test.c");     //c:\test\628\test.c
   return 0;
}