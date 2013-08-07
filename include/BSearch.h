#ifndef BSEARCH_H_BSEARCH_H_
#define BSEARCH_H_BSEARCH_H_

#include <stdio.h>

template<typename T>
int BSearch(const T *array, const int n, const T target)
{
	if ((NULL == array) || (n <= 0))
	{
		return -1;
	}

	int i = 0;
	int j = n - 1;

	while (i <= j)
	{
		int mid = i + ((j - i) >> 1);

		if (array[mid] == target)
		{
			return mid;
		}
		else if (array[mid] < target)
		{
			i = mid + 1;
		}
		else
		{
			j = mid - 1;
		}
	}

	return -1;
}

#endif
