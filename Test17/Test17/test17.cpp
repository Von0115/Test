#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
	printf("*************************\n");
	printf("********1.��ʼ��Ϸ*******\n");
	printf("********2.������Ϸ*******\n");
	printf("*************************\n");
}
void game()
{
	//1.���������
	int ret = rand() % 100+1;    //%100��������0-99���������0-99������+1�����1-100
	//2.����
	int guess = 0;
	while (1)
	{
		printf("�������:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("��Ϸ����\n");
			break;
		default:
			printf("����������\n");
			break;
		}
		
	} while (input==1);
   return 0;
}