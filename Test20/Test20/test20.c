#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//实际上为：int search(int * arr,int key,int sz)  
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
{   //查找key是否在数组arr中，若在则输出key的下标，若不在则输出"查无此数"。
	int arr[] = { 21,22,25,27,44,66,99 };
	int key = 21;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = search(arr, key, sz);     //数组arr传参，实际传递的是数组首元素的地址，并不是传递数组本身！！！因此sz数组元素个数必须传给函数，若sz在函数内求则sz=1
	//找到则返回mid
	//找不到则返回0
	if (ret == 0)
	{
		printf("查无此数", ret);
	}
	else
	{
		printf("key的下标为%d",ret);
	}
   return 0;
}