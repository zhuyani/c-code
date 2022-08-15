#include<stdio.h>
void chuandihanshu(int arr[], int sz)
{
	int j = 0;
	for (j = 0; j < sz - 1; j++)
	{
		int n = 0;
		for (n = 0; n <= sz - 1 - j; n++)
		{
			int flag = 1;
			if (arr[n+1]>arr[n])
			{
				int tmp = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = tmp;
				int flag = 0;
			}
		}
	}


}
int main()
{
	int arr[] = { 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	chuandihanshu(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}