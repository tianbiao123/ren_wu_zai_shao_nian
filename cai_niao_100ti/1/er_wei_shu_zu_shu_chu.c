#include "er_wei_shu_zu_shu_chu.h"
void shuchu_init(int* number, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d",*(number+(i*n)+j));//��ַƫ��//�����Ǹ������ĺ��������������������
			//printf("%3d", number[m][n]);//main����������������
		}
		printf("\n");
	}
}

//����ָ�룬���η�ʽ
//void shuchu_init(int (*number)[6], int m, int n)
//{
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%3d", *(number + (i * n) + j));//��ַƫ��//�����Ǹ������ĺ��������������������
//			//printf("%3d", number[m][n]);//main����������������
//		}
//		printf("\n");
//	}
//}

