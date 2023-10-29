#include "er_wei_shu_zu_shu_ru.h"
void shuru_init(int* number, int m, int n)
{
	int i, j;
		for (i = 0;i < m; i++)//遍历二维数组元素的个数
		{
			for (j = 0; j < n; j++)//遍历二维数组元素的元素
			{
				printf("请输入第%d个元素的第%d个元素\n", i + 1, j + 1);
				scanf_s("%d",number+(i*n)+j);//地址偏移//这里是给单独的函数传参有数组才这样用
				//scanf_s("%d",&number[i][j]);//main函数里面这样调用
			}
			printf("*******************************************\n");
		}
}

