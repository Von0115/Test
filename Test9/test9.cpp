#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{   //32λ��2��32�η����ڴ浥Ԫ��ÿ���ڴ浥Ԫ�ı�Ŷ���32λ2����������64λ��2��64�η����ڴ浥Ԫ��ͬ��
	//һ���ڴ浥Ԫ���Դ��1�ֽڵ�����
	//��ַ���ڴ浥Ԫ��ţ��Ǵ�����ݵĵط��ı�ţ�ָ������Ǵ�ŵ�ַ��
	//ָ����ǵ�ַ
	int a = 10;
	int* pa = &a;         //*˵��pa��ָ�������int˵��paִ�еĶ�����int����
	printf("%p\n", &a);   //%p������ӡ��ַ,�����a�ĵ�һ���ֽڵĵ�ַ
	//sizeof��������������͵ĳ��ȣ���λ�ֽڣ������´�ӡ�Ķ��ǵ�ַ������ȡ���ڵ�ַ���ڴ浥Ԫ��ţ���ռ�ĳ���
	                                  //32λ   64λ
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
	*pb = 66;               //*�ǽ�����������*ͨ����ַ�ҵ�b
	printf("%d\n", b);      //���66

   return 0;
}