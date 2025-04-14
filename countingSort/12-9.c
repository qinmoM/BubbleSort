#include<stdio.h>

int main()
{
	int arr1[] = { 1, 7, 5, 3, 4, 5, 6, 2, 8 };//数字要求为0~9;
	int i = 0, j = 0;
	int u = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[20] = { 0 };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < u; j++)
		{
			if (i == arr1[j])
			{
				arr2[i] += 1;
			}
		}
	}
	j = 0;
	for (i = 0; i < 10; i++)
	{
		for (; arr2[i]; arr2[i] -= 1)
		{
			arr1[j] = i;
			j++;
		}
	}
	for (i = 0; i < u; i++)
	{
		printf("%3d", arr1[i]);
	}
	return 0;
}