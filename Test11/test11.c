#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int sum(int a)
{
	int c = 0;
	static int b = 3;         //static可修饰1.局部变量：改变局部变量生命周期，本质上是改变局部变量的存储类型（栈区、堆区、静态区）
	                                      //2.全局变量 ：修饰全局变量后，使得这个全局变量只能在自己所在的源文件使用，其他源文件不能使用（extern都不管用）。
										  // 注：因为全局变量具有外部链接属性，才能在其他.c文件使用，被static修饰后，变成了内部链接属性。
	                                      //3.函数：修饰后其他源文件不可用，同全局变量
	c += 1;
	b += 2;
	return(a + b + c);
}         //第一次执行sum后，a=2,c=1，b=5，返回值为8，第二次执行，a依然等于2，c依然是1，但是b被static修饰，此时b为7，所以结果为10，以此类推
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));   //8,10,12,14,16,
	}

   return 0;
}