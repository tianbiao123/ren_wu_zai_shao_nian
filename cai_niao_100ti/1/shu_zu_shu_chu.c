#include "shu_zu_shu_chu.h"
void shu_chu(int* number, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("第%d个数是%3d\n", i + 1, *(number + i));
	}

}
