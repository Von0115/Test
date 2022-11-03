#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	printf("%d\n", ~a);   //-1, ~a按位取反操作符，计算机中储存的是补码   000......000(32位，a的补码）
	                                                                 //111......111(按位取反)
	                                                                 //100......001(~a的原码，真值为-1)
                                            //正数的原反补一样，负数的反码：符号位不变其余变相反   负数的补码：反码再加1
	//sizeof 计算操作数的类型长度（单位字节），注意计算的是操作数的类型的长度
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));                 //数组总长：10x4=40
	printf("%d\n", sizeof(arr[0]));              //计算数组中一个元素的大小  4
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算数组中元素个数   10
	return 0;
}