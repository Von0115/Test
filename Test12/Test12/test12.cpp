#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)          //�Ǽ��ʹ���伸��ʼִ�У�����break��ֹͣ����break�ͼ�������ִ��
	{
	/*case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������");
		break;*/
	case 1:                        //����case�µ��ǿ���䣬Ҳ���������ִ�У�����break����
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������");
		break;
	}
	//case��������ǳ���
	//switch�����ڵ���������case�ĳ�����ƥ�䣬�ͽ���default���
   return 0;
}