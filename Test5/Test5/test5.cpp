#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{   
    //int x;
    //x = printf("I See, Sea in C");   //15
    //x = printf("I See, Sea in C\n");   //16     //printf��������ֵ��������ַ�(����ת���ַ�)�������������֣���ĸ�������ţ��ո��
    //printf("x=%d", x);int A=43;
    int A = 43;
    printf("%d\n", printf("%d", printf("%d", A)));   //4321
    //printf�ķ���ֵ����������ַ�����
    //������printf���"43"�ַ�����Ϊ2�����Ƿ���ֵΪ2���ڶ���printf�����"2��
    //�ڶ���printf���"2"�ַ�����Ϊ1�����Ƿ���ֵΪ1����һ��printf�����"1"

    return 0;

}