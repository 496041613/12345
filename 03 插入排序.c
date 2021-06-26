/**/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAX 10

//插入排序---将无序序列加入到有序序列中
/*
插入排序在以下情况下效率较高：
	1、  序列基本有序（小的数基本在左边 大的数基本在右面）
	2、插入序列的时候 数据序列比较少
*/
void insertSort(int arr[], int length)
{
	int i, j;
	for ( i = 1;i < MAX ;i++)
	{
		
		if (arr[i] < arr[i - 1])
		{
			int tmp = arr[i]; //将arr[i]取出

			for (j = i - 1; arr[j]>tmp;j--)  //向后移动的条件
			{
				arr[j + 1] = arr[j];  //将元素后移
			}
			arr[j+1] = tmp;
		}

	}

}


void test01()
{
	srand((unsigned int)time(NULL));

	int arr[MAX];
	for (int i = 0; i < MAX;i++)
	{
		arr[i] = rand() % (MAX + 1);  //0-10取值
	}

	//打印
	printf("排序前：\n");
	for (int i = 0; i < MAX;i++)
	{
		printf("%d ", arr[i]);
	}

	insertSort(arr, MAX);

	//打印
	printf("排序后：\n");
	for (int i = 0; i < MAX;i++)
	{
		printf("%d ", arr[i]);
	}


}



int main()
{
	test01();

	system("pause");
	return 0;
}