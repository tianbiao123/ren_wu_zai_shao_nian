//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////���ֲ���
///*
//* �������ܣ�39�������е�λ��
//* ������int* arry int len
//* ����ֵ������һ��ָ��39��ָ��
//*/
//int  Binary_search(int* arry, int len)
//{
//	//����ȷ������ĺ�������
//	//ȷ�����ȥ�ж���������
//	//ȷ������ֵ��ָ��
//	int key   = 39;              //Ŀ��ֵ
//	int left  = 0;			     //ָ�����������
//	int right = len-1;	         //ָ�������ұ�
//	int mid ;					 //ָ�������м�
//	int empty = -1;
//		while (left <= right)
//		{
//			//ÿһ��ѭ����mid/2;
//			mid = (left + right) / 2;
//			//���mid��ָ��Ŀ��,�ҵ���ֱ�ӷ���
//			if (arry[mid] == key)
//			{
//				empty = mid;
//				break;
//			}
//			//Ŀ��ֵ���м�ֵ���ұ�
//			else if (arry[mid] < key)
//			{
//				//��߽�ƫ��
//				left = mid + 1;
//			}
//			//Ŀ��ֵ���м�ֵ�����
//			else
//			{
//				//�ұ߽�ƫ��
//				right = mid - 1;
//			}
//		}
//		//���ѭ��������û���ҵ�empty����-1������û���ҵ�
//		if (empty == -1)
//		{
//			printf("û���ҵ�\n");
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