#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{   
    //int x;
    //x = printf("I See, Sea in C");   //15
    //x = printf("I See, Sea in C\n");   //16     //printf函数返回值是输出的字符(包括转意字符)数量，包括数字，字母，标点符号，空格等
    //printf("x=%d", x);int A=43;
    int A = 43;
    printf("%d\n", printf("%d", printf("%d", A)));   //4321
    //printf的返回值就是输出的字符数量
    //第三个printf输出"43"字符数量为2，于是返回值为2，第二个printf就输出"2”
    //第二个printf输出"2"字符数量为1，于是返回值为1，第一个printf就输出"1"

    return 0;

}