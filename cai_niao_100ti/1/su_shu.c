#include "su_shu.h"
//�жϸ����Ƿ�Ϊ����
//������ӡ1��  ������ӡ0��
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
//ͳ�������ĸ���
int geshu(int n)
{
    int sum;
    sum = 0;
    int i;
    //ͳ��i��n֮�����������
    for (i = 2; i <= n; i++)
    {
        if (su_shu(i) == 1)
        {
            printf("%d������\n", i);
            sum++;
        }
    }
    //printf("1��%dֱ�������Ϊ%d\n", n,sum);
    return sum;
}