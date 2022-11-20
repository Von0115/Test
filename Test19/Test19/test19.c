#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char input[20] = {0};   //存放输入的信息
	system("shutdown -s -t 60");      //库函数，执行系统命令的  头文件--stdlib.h
	while (1)
	{
		printf("您的电脑将在60秒后关机，输入“我是二臂”即可取消关机\n");
		scanf("%s", input);     //数组名就是地址，不需要加&
		if (strcmp(input, "我是二臂") == 0)   //判断两个字符串是否相等不能使用==，应该使用库函数strcmp()进行比较，括号内放入两个字符串（字符串需要用"")，当字符串相等时返回值为0，不相等时返回值为1。
		{
			system("shutdown -a");
			break;
		}
	}
   return 0;
}