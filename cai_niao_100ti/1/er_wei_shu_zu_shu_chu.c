#include "er_wei_shu_zu_shu_chu.h"
void shuchu_init(int* number, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d",*(number+(i*n)+j));//地址偏移//这里是给单独的函数传参有数组才这样用
			//printf("%3d", number[m][n]);//main函数里面这样调用
		}
		printf("\n");
	}
}

//数组指针，传参方式
//void shuchu_init(int (*number)[6], int m, int n)
//{
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%3d", *(number + (i * n) + j));//地址偏移//这里是给单独的函数传参有数组才这样用
//			//printf("%3d", number[m][n]);//main函数里面这样调用
//		}
//		printf("\n");
//	}
//}

