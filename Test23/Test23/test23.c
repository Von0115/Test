#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char str[] = "hello bit";
	//[hello bit\0] 
	printf("%d %d\n", sizeof(str),strlen(str));
	//10 9
	//strlen -- ���� -- ���ַ������ȵģ���\0֮ǰ���ֵ��ַ�����,\0�ǽ����ı�־
	//sizeof -- ������ -- �������/������ռ�ڴ��С����λ���ֽ�
    return 0;
}