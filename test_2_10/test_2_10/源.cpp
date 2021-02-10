#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//喝汽水
//int main(void)
//{
//	int money = 0;
//	int total = 0;
//	int empty=0;
//	scanf("%d", &money);
//
//	if (money = 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//	////买回来的汽水喝掉
//	//total = money;
//	//empty = total;
//	////换回来的汽水
//	//while (empty >= 2)
//	//{
//	//	total+=empty / 2;
//	//	empty = empty - empty / 2;
//	//	//或
//	//	//empty=empty/2+empty%2;
//	//}
//	printf("%d", total);
//	return 0;
//}

void Move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		while ((left<right) && (arr[left] % 2 == 1))//左边找偶数
		{
			left++;
		}
		while ((left < right)&& (arr[right] % 2 == 0))//右边找奇数
		{
			right--;
		}
		if ( left < right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}

void Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	Move(arr, sz);
	Print(arr, sz);
	return 0;
}