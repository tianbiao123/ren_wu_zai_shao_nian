#include "shu_zu_shu_ru.h"

void shu_ru(int* number, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("�������%d����\n", i + 1);
		scanf_s("%d", &*(number + i));
	}
}