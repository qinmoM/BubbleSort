#include<stdio.h>

int main()
{
	int arr1[] = { 4, 5, 66, 84, 32, 90, 11 };
	int m = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0, j = 0, n = 0;
	for (i = 0; i < m; i++)
	{
		for (j = i; j < m; j++)
		{
			n = arr1[i];
			if (arr1[j] < n)//更改排序方式只需要改这里的符号。
			{
				arr1[i] = arr1[j];
				arr1[j] = n;
			}
		}
	}
	for (i = 0; i < m; i++)
	{
		printf("%-3d", arr1[i]);
	}
	return 0;
}