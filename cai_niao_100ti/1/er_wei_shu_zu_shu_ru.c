#include "er_wei_shu_zu_shu_ru.h"
void shuru_init(int* number, int m, int n)
{
	int i, j;
		for (i = 0;i < m; i++)//������ά����Ԫ�صĸ���
		{
			for (j = 0; j < n; j++)//������ά����Ԫ�ص�Ԫ��
			{
				printf("�������%d��Ԫ�صĵ�%d��Ԫ��\n", i + 1, j + 1);
				scanf_s("%d",number+(i*n)+j);//��ַƫ��//�����Ǹ������ĺ��������������������
				//scanf_s("%d",&number[i][j]);//main����������������
			}
			printf("*******************************************\n");
		}
}

