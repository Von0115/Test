#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一个能交换两个变量的函数


//错误代码：
//void swap(int x, int y)     //实参a,b将数值传给形参x,y，函数只能将x,y的值进行交换，因为x、y的地址和a,b的地址不相同,函数不能将a,b的值进行交换
//{
//	int z = 0;              //定义一个参数(形参，实参)后,参数便会产生相应的地址
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 18;
//	int b = 16;
//	printf("交换前:a=%d,b=%d\n", a, b);
//	swap(a, b);
//	printf("交换后:a=%d,b=%d\n", a, b);
//   return 0;
//}

//正确代码：
void swap(int * pa, int * pb)        //将实参的地址传给形参，在函数内通过解引用地址来改变实参的数值
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 18;
	int b = 16;
	printf("交换前:a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后:a=%d,b=%d\n", a, b);
    return 0;
}


//实参：真实传给函数的参数叫实参，实参可以是：常量、变量、表达式、函数等。
//形参：形参是指函数名后面的变量，只有在函数被调用过程中才会分配内存单元，因此叫形参。函数被调用完后会自动销毁，形参只在函数内有效。

//小结：需要改变实参的数值时，需要给函数传地址！！！