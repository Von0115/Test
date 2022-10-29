#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()    \\输入8个数比较出最大的数
{  //定义数组
	int arr[8] = {0};
	//输入
	int i = 0;
	for(i=0;i<8;i++)
	{
		scanf("%d", &arr[i]);
	}
   //比较大小
	int max = arr[0];
	for (i = 0; i < 8; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
   //输出
	printf("max=%d\n", max);

	return 0;
}
