#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		break;
	//	printf("%d", i);          //1234 程序结束  
	//	i++;
	//}
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue;
	//	printf("%d", i);          //1234  程序不结束，遇到continue执行下一次循环，无限循环
	//	i++;
	//}



		char password[20] = { 0 };
		printf("输入密码：");
		scanf("%s", password);      //键盘输入：123456\n(键盘回车导致输入转意字符\n)，数据存入缓冲区后，scanf和getchar(输入函数)会从缓冲区读取数据，缓冲区为空，输入函数则会等待。
		printf("请确认密码(Y/N)");  

		//scanf读取后123456后，\n就会留在缓冲区。
		//getchar(); //可以清理缓存区中的\n,但是密码要是过长或者密码中存在空格，就无法彻底清理缓存区。
		
		//以下是彻底清理缓冲区中数据的语句。
		int tmp = 0;
		while ((tmp = getchar()) != '\n')     //tmp中接受的字符只要不等于\n，就会一直执行空语句，直到读取到\n,此时便清空了缓存区。
		{
			;
		}
		
		//若不清空缓冲区剩余的字符，getchar就会自动读取到\n,并直接输出“确认失败”,连输入Y或N的机会都没有。
		int ch = getchar();
		if (ch == 'Y')
		{
			printf("确认成功\n");
		}
		else
			printf("确认失败\n");
	     
		return 0;
}