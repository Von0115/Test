#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    i = a++ || ++b || c++||d++;   //   ||�߼���
    printf("  a=%d\n  b=%d\n  c=%d\n  d=%d\n", a, b, c, d);   
    //a=1,b=3,c=3,d=4   a++����++bΪ�棬���漴�ɲ��ü��㣬��Ϊ����ļ�������Ӱ��ñ��ʽ�Ľ��

    //i = a++ && ++b && c++ && d++;   &&�߼���   a++�������ú�++����һ����Ϊ0����ļ�������Ӱ��ñ��Ľ��
    //a=1,b=2,c=3,d=4
    return 0;
}