//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////二分查找
///*
//* 函数功能：39在数组中的位置
//* 参数：int* arry int len
//* 返回值：返回一个指向39的指针
//*/
//int  Binary_search(int* arry, int len)
//{
//	//首先确定数组的红蓝区域
//	//确定如何去判定红蓝区域
//	//确定返回值的指向
//	int key   = 39;              //目标值
//	int left  = 0;			     //指向数组最左边
//	int right = len-1;	         //指向数组右边
//	int mid ;					 //指向数组中间
//	int empty = -1;
//		while (left <= right)
//		{
//			//每一次循环后mid/2;
//			mid = (left + right) / 2;
//			//如果mid就指向目标,找到了直接返回
//			if (arry[mid] == key)
//			{
//				empty = mid;
//				break;
//			}
//			//目标值在中间值的右边
//			else if (arry[mid] < key)
//			{
//				//左边界偏移
//				left = mid + 1;
//			}
//			//目标值在中间值的左边
//			else
//			{
//				//右边界偏移
//				right = mid - 1;
//			}
//		}
//		//如果循环结束后没有找到empty还是-1，代表没有找到
//		if (empty == -1)
//		{
//			printf("没有找到\n");
//		}
//	return empty;
//}
//int main(void)
//{
//	int arry[] = { 12,15,23,27,34,39,41,49,52,56 };
//	int len = sizeof(arry) / sizeof(arry[0]);
//	int index = Binary_search(arry, len);
//	printf("%d\n",index);
//	system("pause");
//	return 0;
//}