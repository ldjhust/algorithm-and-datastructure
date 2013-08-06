#ifndef BUBBLESORT_H_BUBBLESORT_H_
#define BUBBLESORT_H_BUBBLESORT_H_

#include "Swap.h"

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

#endif
