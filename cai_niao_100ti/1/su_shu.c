#include "su_shu.h"
//判断该数是否为质数
//质数打印1；  质数打印0；
int su_shu(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
//统计质数的个数
int geshu(int n)
{
    int sum;
    sum = 0;
    int i;
    //统计i到n之间的质数个数
    for (i = 2; i <= n; i++)
    {
        if (su_shu(i) == 1)
        {
            printf("%d是质数\n", i);
            sum++;
        }
    }
    //printf("1到%d直间的质数为%d\n", n,sum);
    return sum;
}