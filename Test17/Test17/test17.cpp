#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
	printf("*************************\n");
	printf("********1.开始游戏*******\n");
	printf("********2.结束游戏*******\n");
	printf("*************************\n");
}
void game()
{
	//1.生产随机数
	int ret = rand() % 100+1;    //%100的余数是0-99，随机生成0-99的数，+1后便是1-100
	//2.猜数
	int guess = 0;
	while (1)
	{
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("游戏结束\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
		
	} while (input==1);
   return 0;
}