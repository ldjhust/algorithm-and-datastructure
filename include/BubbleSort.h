#ifndef BUBBLESORT_H_BUBBLESORT_H_
#define BUBBLESORT_H_BUBBLESORT_H_

#include "Swap.h"

bool BubbleSort(int *array, const int n)
{
	if ((NULL == array) || (n <= 0))
	{
		return false;
	}

	bool bFlag = true;
	int N = n;

	while (bFlag)
	{
		bFlag = false;

		for (int j = 1; j < N; ++j)
		{
			if (array[j] < array[j - 1])
			{
				bFlag = true;
				swap(array[j], array[j - 1]);
			}
		}

		--N;
	}
	
	return true;
}

#endif
