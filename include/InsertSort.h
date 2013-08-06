#ifndef INSERTSORT_H_INSERTSORT_H_
#define INSERTSORT_H_INSERTSORT_H_

#include <stdio.h>
#include "Swap.h"

bool InsertSort(int *array, const int n)
{
	if ((NULL == array) || (n <= 0))
	{
		return false;
	}

	for (int i = 1; i < n; ++i)
	{
		if (array[i] >= array[i-1])
		{
			continue;
		}

		int tmp = array[i];

		for (int j = i - 1; (j >= 0) && (array[j] > tmp); --j)
		{
			swap(array[j], array[j+1]);
		}
	}

	return true;
}

#endif
