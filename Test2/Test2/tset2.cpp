#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{  //��������
	int arr[8] = {0};
	//����
	int i = 0;
	for(i=0;i<8;i++)
	{
		scanf("%d", &arr[i]);
	}
   //�Ƚϴ�С
	int max = arr[0];
	for (i = 0; i < 8; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
   //���
	printf("max=%d\n", max);

	return 0;
}
