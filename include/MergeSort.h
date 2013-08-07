#ifndef MergeSORT_H_MergeSORT_H_
#define MergeSORT_H_MergeSORT_H_

#include <stdio.h>
#include <malloc.h>

template<typename T>
bool MergeArray(T *array, const int start, const int mid, const int end)
{
	if ((NULL == array) || (start < 0) || (start > mid) || (mid > end))
	{
		return false;
	}

	T *pArr = NULL;

	if (NULL == (pArr = (int *)malloc((end - start + 1) * sizeof(int))))
	{
		return false;
	}

	int i = start;
	int j = mid + 1;
	int k = 0;

	while ((i <= mid) && (j <= end))
	{
		if (array[i] < array[j])
		{
			pArr[k] = array[i];
			++k;
			++i;
		}
		else
		{
			pArr[k] = array[j];
			++k;
			++j;
		}
	}

	while (i <= mid)
	{
		pArr[k] = array[i];
		++k;
		++i;
	}

	while (j <= end)
	{
		pArr[k] = array[j];
		++k;
		++j;
	}

	k = 0;
	
	for (i = start; i <= end; ++i)
	{
		array[i] = pArr[k];
		++k;
	}

	free(pArr);

	return true;	
}

template<typename T>
bool MergeSort(T *array, const int start, const int end)
{
	if ((NULL == array) || (start < 0) || (start > end))
	{
		return false;
	}

	if (start == end)
	{
		return true;
	}

	int mid = start + ((end - start) >> 1);

	MergeSort(array, start, mid);
	MergeSort(array, mid + 1, end);

	MergeArray(array, start, mid, end);

	return true;
}

#endif
