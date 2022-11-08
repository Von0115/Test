#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)          //是几就从语句几开始执行，遇到break才停止，无break就继续往下执行
	{
	/*case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:
		printf("输入错误");
		break;*/
	case 1:                        //即便case下的是空语句，也会继续往下执行，遇到break跳出
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("星期天\n");
		break;
	default:
		printf("输入错误");
		break;
	}
	//case后面必须是常量
	//switch括号内的数不能与case的常量相匹配，就进入default语句
   return 0;
}