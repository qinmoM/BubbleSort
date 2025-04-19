#include<stdio.h>

int main()
{
	int arr[6] = { 4, 1, 3, 1, 5, 2 };
	int i = 0, j = 0, y = 0, u = sizeof(arr) / sizeof(arr[0]);
	printf("The element is ");
	for (i = 0; i < u; i++)
	{
		printf("%d,", arr[i]);
	}
	for (i = 1; i < u; i++)
	{
		for (j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				y = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = y;
			}
		}
	}
	printf("\n");
	for (i = 0; i < u; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	getchar();
	return 0;
}