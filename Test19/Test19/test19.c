#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char input[20] = {0};   //����������Ϣ
	system("shutdown -s -t 60");      //�⺯����ִ��ϵͳ�����  ͷ�ļ�--stdlib.h
	while (1)
	{
		printf("���ĵ��Խ���60���ػ������롰���Ƕ��ۡ�����ȡ���ػ�\n");
		scanf("%s", input);     //���������ǵ�ַ������Ҫ��&
		if (strcmp(input, "���Ƕ���") == 0)   //�ж������ַ����Ƿ���Ȳ���ʹ��==��Ӧ��ʹ�ÿ⺯��strcmp()���бȽϣ������ڷ��������ַ������ַ�����Ҫ��"")�����ַ������ʱ����ֵΪ0�������ʱ����ֵΪ1��
		{
			system("shutdown -a");
			break;
		}
	}
   return 0;
}