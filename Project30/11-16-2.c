#include<stdio.h>

int main()
{
	int arr[] = { 2, 3, 9, 9, 4, 55};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i = 0, m = 0, b = 0, c = 0;
node1:
	b = 0;//防止在下一次判断是否要循环时，b被带入之前判断后的值
	for (i = 0; i < n - 1; i++)//进行一次排序
	{
		if (arr[i] < arr[i + 1])
		{
			c = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = c;
		}
	}
	for (i = 0; i < n - 1; i++)//用b值来表示是否已经排好序
	{
		if (arr[i] < arr[i + 1])
			m = 1;
		else
			m = 0;
		b = b + m;
	}
	if (b == 0)//根据b判断是否要再次排序
		for (i = 0; i < n; i++)//打印数组
		{
			printf("%6d", arr[i]);
		}
	else
		goto node1;
	return 0;
}