//#include <stdio.h>
///*贪心策略
//局部最优推出全局最优*/
///*example:
//有一个背包最多只能装重量为weight的物品
//那么，现在有一堆物品，每个物品的重量和价值都是不同的
//问装满这个背包，背包里物品的最大价值是多少
//*/
///*
//思路：找出局部最优，并且能推出全局最优，而且找不出来反例。就去试一试，反复尝试。
//*/
///*贪心算法没有什么规律，基本不同的题贪心策略也不一样*/
//
///*假如你要给孩子们发饼干：
//对每个孩子 i，都有一个胃口值 g[i]，这是能让孩子们满足胃口的饼干的最小尺寸；
//并且每块饼干 j，都有一个尺寸 s[j] 。
//如果 s[j] >= g[i]，我们可以将这个饼干 j 分配给孩子 i ，这个孩子会得到满足。
//尽可能满足越多数量的孩子，并输出这个最大值。
//例：输入: g = [1,2,3], s = [1,1]
//输出: 1
//*/
//
////首先对数组先排序
//void maopao(int* buff, int len)
//{
//	int i, j;
//	int b = 0;
//	//遍历len-1轮
//	for (i = 0; i < len - 1; i++)
//	{
//		//每轮遍历len-i次
//		for (j = 0 ; j < (len-1) - i; j++)
//		{
//			if (*(buff + j) > *(buff + (j + 1)))//升序
//			{
//				b = *(buff + j);
//				*(buff + j) = *(buff + (j + 1));
//				*(buff + (j + 1)) = b;
//			}
//		}
//
//	}
//}
//
//void print(int* buff, int len)
//{
//	int i;
//	int cnt = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", buff[i]);
//	}
//}
//
//int Avarice(int* g, int len1, int* s, int len2)
//{
//	int count = 0;//用于记录已经喂饱的小孩数量
//	int index = len2-1;//饼干下标
//	int i;
//	//用饼干去喂小孩所以遍历小孩从大到小
//	for (i = len1 - 1; i >= 0; i--)
//	{
//		//如果饼干大小>=小孩胃口,并且下标不能为负数
//		//进入循环表示喂饱一个小孩
//		while (index >= 0 && s[index] >= g[i])
//		{
//			//计数值+1
//			count++;
//			//饼干大小下标-1继续向下寻找
//			index--;
//			//找到一次break;
//			break;
//		}
//	}
//	return count;
//}
//int main(void)
//{
//	//小孩胃口
//	int g[4] =  { 7,1,2,10 };
//	//饼干大小
//	int s[4] =  { 1,5,3,9 };
//	//思路：尽量用较大的饼干去喂胃口大的小孩
//	//或者：用较小的饼干去喂胃口小的小孩
//	int len1 = sizeof(g) / sizeof(g[0]);
//	maopao(g, len1);
//	int len2 = sizeof(s) / sizeof(s[0]);
//	maopao(s, len2);
//	int num = Avarice(g, len1, s, len2);
//	printf("%d\n", num);
//	return 0;
//}

