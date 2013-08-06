#ifndef SHELLSORT_H_SHELLSORT_H_
#define SHELLSORT_H_SHELLSORT_H_

#include <stdio.h>

bool QuickSort(int *array, const int start, const int end)
{
	if ((NULL == array) || (start < 0))
	{
		return false;
	}

	if (start >= end)
	{
		return true;
	}

	int tmp = array[start];
	int i = start;
	int j = end;

	while (i < j)
	{
		while ((i < j) && (array[j] > tmp))
		{
			--j;
		}

		if (i < j)
		{
			array[i] = array[j];
			++i;
		}

		while ((i < j) && (array[i] <= tmp))
		{
			++i;
		}

		if (i < j)
		{
			array[j] = array[i];
			--j;
		}
	}

	array[i] = tmp;

	QuickSort(array, start, i - 1);

	QuickSort(array, i + 1, end);

	return true;
}

#endif
