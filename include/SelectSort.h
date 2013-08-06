#ifndef SELECTSORT_H_SELECTSORT_H_
#define SELECTSORT_H_SELECTSORT_H_

#include <stdio.h>
#include "Swap.h"

bool SelectSort(int *array, const int n)
{
	if ((NULL == array) || (n <= 0))
	{
		return false;
	}

	for (int i = 0; i < n; ++i)
	{
		int min = i;

		for (int j = i + 1; j < n; ++j)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		if (min > i)
		{
			swap(array[i], array[min]);
		}
	}

	return true;
}

#endif
