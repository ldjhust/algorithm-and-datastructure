#ifndef SHELLSORT_H_SHELLSORT_H_
#define SHELLSORT_H_SHELLSORT_H_

#include <stdio.h>
#include "Swap.h"

template<typename T>
bool ShellSort(T *array, const int n)
{
	if ((NULL == array) || (n <= 0))
	{
		return false;
	}

	int gap = n >> 1;

	while (gap > 0)
	{
		for (int i = gap; i < n; ++i)
		{
			if (array[i] >= array[i - gap])
			{
				continue;
			}

			T tmp = array[i];

			for (int j = i - gap; (j >= 0) && (array[j] > tmp); j -= gap)
			{
				swap(array[j], array[j + gap]);
			}
		}

		gap >>= 1;
	}

	return true;
}

#endif
