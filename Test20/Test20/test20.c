#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ʵ����Ϊ��int search(int * arr,int key,int sz)  
int search(int arr[],int key,int sz)
{
	int left = 0;
	int right = sz-1;
	while (left <= right)
	{
		int mid = (left+right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
		
	}
	return 0;
}
int main()
{   //����key�Ƿ�������arr�У����������key���±꣬�����������"���޴���"��
	int arr[] = { 21,22,25,27,44,66,99 };
	int key = 21;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = search(arr, key, sz);     //����arr���Σ�ʵ�ʴ��ݵ���������Ԫ�صĵ�ַ�������Ǵ������鱾���������sz����Ԫ�ظ������봫����������sz�ں���������sz=1
	//�ҵ��򷵻�mid
	//�Ҳ����򷵻�0
	if (ret == 0)
	{
		printf("���޴���", ret);
	}
	else
	{
		printf("key���±�Ϊ%d",ret);
	}
   return 0;
}