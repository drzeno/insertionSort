/*********************************
> File Name: Insertion_sort_base.c
> Author: Zeno
> Mail:340562424@qq.com
> Created Time: 2015��09��03�� ������ 16ʱ42��20��
********************************/
#include<stdio.h>
void insertionSort(int array[], int len);
int main()
{
	int i;
	int arr[7] = { 2, 3, 1, 5, 4, 6, 9 };
	insertionSort(arr, sizeof(arr) / sizeof(arr[0]));
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}

void insertionSort(int array[], int len)
{
	int newPoi = 0, current = 0, tempNew = 0, tempVal = 0;
	for (newPoi = 1; newPoi < len; newPoi++)
	{
		tempNew = newPoi;
		tempVal = array[newPoi];
		current = newPoi - 1;
		while (array[current] > tempVal)
		{
			//ѭ������
			array[tempNew] = array[current];
			if (current == 0)//��ֹ��Խ��
			{
				array[current] = tempVal;
				break;
			}
			else
			{
				tempNew--;
				current--;
				printf("%d\n", current);
			}
		}
		if(current != 0)//��ֹ���}�xֵ���cif(current == 0)������Z��
		array[current + 1] = tempVal;
	}
	
}


