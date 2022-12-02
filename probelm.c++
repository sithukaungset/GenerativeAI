#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int arr[6] = { 7,1,5,3,6,4 };
	int b = rand();
	int k = 0;
	for (int i = 0; i < 6; i++)
	{
		arr[i] = rand();
	}
	scanf("%d", &a);
	int arr2[6] = { 0, };
	int max = 0;
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] > max && a < i && arr[i] > arr[a])
			max = arr[i];
	}
	k = max - arr[a];
	if (k < 0)
		k = 0;
		
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("%d", k);
    printf("\n");

}
