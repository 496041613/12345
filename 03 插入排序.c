/**/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAX 10

//��������---���������м��뵽����������
/*
�������������������Ч�ʽϸߣ�
	1��  ���л�������С������������� ��������������棩
	2���������е�ʱ�� �������бȽ���
*/
void insertSort(int arr[], int length)
{
	int i, j;
	for ( i = 1;i < MAX ;i++)
	{
		
		if (arr[i] < arr[i - 1])
		{
			int tmp = arr[i]; //��arr[i]ȡ��

			for (j = i - 1; arr[j]>tmp;j--)  //����ƶ�������
			{
				arr[j + 1] = arr[j];  //��Ԫ�غ���
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
		arr[i] = rand() % (MAX + 1);  //0-10ȡֵ
	}

	//��ӡ
	printf("����ǰ��\n");
	for (int i = 0; i < MAX;i++)
	{
		printf("%d ", arr[i]);
	}

	insertSort(arr, MAX);

	//��ӡ
	printf("�����\n");
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