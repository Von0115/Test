#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    i = a++ || ++b || c++||d++;   //   ||逻辑或
    printf("  a=%d\n  b=%d\n  c=%d\n  d=%d\n", a, b, c, d);   
    //a=1,b=3,c=3,d=4   a++或上++b为真，后面即可不用计算，因为后面的计算结果不影响该表达式的结果

    //i = a++ && ++b && c++ && d++;   &&逻辑且   a++是先引用后++，第一部分为0后面的计算结果不影响该表达的结果
    //a=1,b=2,c=3,d=4
    return 0;
}