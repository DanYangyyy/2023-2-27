#include<stdio.h>
//int main()
//{
//	int arr[3][6] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		int j = 0;
//		for (j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4][6] = { {1,2,3},{3,4,5},{5,6,7} };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		int j = 0;
//		for (j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
//		{
//			int k = 0;
//			for (k = 0; k < sizeof(arr[0][0]) / sizeof(arr[0][0][0]); k++)
//			{
//				printf("%d ", arr[k][i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//写一个冒泡排序的函数,来排序arr数组的内容

void bubble_sort(int* arr,int sz)
{
	int flag = 1;//假设已经有序
	//趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟冒泡排序过程
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (1 == flag)
			break;
	}
}
int main()
{
	//int arr[] = { 8,5,6,7,9,3,1,2,0,4,10 };
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("\n");
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("\n");
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}


