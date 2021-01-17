#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int a,left, right, mid;
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	scanf("%d", &a);
	int sz = sizeof(arr) / sizeof(arr[0]);
	left = 0;
	right = sz - 1;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > a)
		{
			right = mid - 1;
		}
		else if (arr[mid] < a)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是:%d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");
	return 0;
}
