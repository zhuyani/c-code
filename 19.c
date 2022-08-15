#include<stdio.h>
/*int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int se = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < se; i++);
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}*/
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = i * 4 + j;
		}
		for (i = 0; i < 3; i++)
		{
			int j = 0;
			for (j = 0; j < 4; j++)
			{
				printf("%d ", arr[i][j]);
			}
		}
	}
	return 0;
}