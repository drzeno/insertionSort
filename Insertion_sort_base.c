/*********************************
> File Name: Insertion_sort_base.c
> Author: Zeno
> Mail:340562424@qq.com
> Created Time: 2015��09��03�� ������ 16ʱ42��20��
********************************/
#include<stdio.h>
void insertionSort(int array[]);
int main()
{
	int i;
	int arr[6] = { 4, 1,1,1,1, 1 };
	insertionSort(arr);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}

void insertionSort(int array[])
{
	//newPoi��ȷ��λ�õ�����Ԫ�ص��±꣬�𽥵ݼ���ֱ����������һ��Ԫ��
	//currentΪarray[newPoi]��ǰ����Ԫ�ص��±꣬�𽥵ݼ�������λҪ��array[newPoi]�Ƚϵ�Ԫ��ֵ
	int len = 0;
	len = sizeof(array)/sizeof(array[0]);
	int newPoi = 0, current = 0, tempNew = 0, tempVal = 0;
	for (newPoi = 1; newPoi < len; newPoi++)
	{
		tempNew = newPoi;
		tempVal = array[newPoi];
		current = newPoi - 1;
		int flag = 0;
		while (array[current] > tempVal)
		{
			//ѭ������
			array[tempNew] = array[current];
			if (current == 0)//��ֹ��Խ��
			{
				array[current] = tempVal;
				flag = 1;
				break;
			}
			else
			{
				tempNew--;
				current--;
			}
		}
		if(flag == 0)//��ֹ���}�xֵ���cif(current == 0)������Z��;��ʼд����if(current != 0),����1�� 5�� 1�� 4, 6,���ܺܺ�����
			//��flag���������if��以�������
		array[current + 1] = tempVal;
	}
	
}


