#include <stdio.h>

void swap(int &a, int &b)
{
	if (a == b)
	{
		return;
	}
	
	a ^= b;
	b ^= a;
	a ^= b;
}

bool printarray(const int *array, const int n)
{
	if ((NULL == array) || (n <= 0))
	{
		return false;
	}
	
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", array[i]);
	}
	
	printf("\n");
	
	return true;
}

bool BubbleSort(int *array, const int n)
{
	if ((NULL == array) || (n <= 0))
	{
		return false;
	}
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j < (n - i); ++j)
		{
			if (array[j] < array[j - 1])
			{
				swap(array[j], array[j - 1]);
			}
		}
	}
	
	return true;
}

int main(int argc, char *argv[])
{
	int array[] = {10, 9, 4, 3, 6, 2, 8, 1, 7, 5};
	
	printf("befor bubble sort:\n");
	printarray(array, 10);
	
	BubbleSort(array, 10);
	
	printf("afte bubble sort:\n");
	printarray(array, 10);
	
	return 0;	
}
