#include<stdio.h>

int main()
{
	int arr[] = { 2, 3, 9, 9, 4, 55};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i = 0, m = 0, b = 0, c = 0;
node1:
	b = 0;//��ֹ����һ���ж��Ƿ�Ҫѭ��ʱ��b������֮ǰ�жϺ��ֵ
	for (i = 0; i < n - 1; i++)//����һ������
	{
		if (arr[i] < arr[i + 1])
		{
			c = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = c;
		}
	}
	for (i = 0; i < n - 1; i++)//��bֵ����ʾ�Ƿ��Ѿ��ź���
	{
		if (arr[i] < arr[i + 1])
			m = 1;
		else
			m = 0;
		b = b + m;
	}
	if (b == 0)//����b�ж��Ƿ�Ҫ�ٴ�����
		for (i = 0; i < n; i++)//��ӡ����
		{
			printf("%6d", arr[i]);
		}
	else
		goto node1;
	return 0;
}