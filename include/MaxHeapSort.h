#ifndef MAXHEAPSORT_H_MAXHEAPSORT_H_
#define MAXHEAPSORT_H_MAXHEAPSORT_H_

#include <stdio.h>
#include "Swap.h"

template<typename T>
bool MaxHeapFixUp(T *maxHeap, const int l)
{
	if ((NULL == maxHeap) || (l < 0))
	{
		return false;
	}

	int i = l;
	int j = (i - 1) >> 1;

	while (i > 0)
	{
		if (maxHeap[j] >= maxHeap[i])
		{
			break;
		}

		swap(maxHeap[i], maxHeap[j]);

		i = j;
		j = (i - 1) >> 1;
	}

	return true;
}

template<typename T>
bool MaxHeapFixDown(T *maxHeap, const int l, const int n)
{
	if ((NULL == maxHeap) || (l < 0) || (l >= n))
	{
		return false;
	}

	int i = l;
	int j = 2 * i + 1;

	while (j < n)
	{
		if (((j + 1) < n) && (maxHeap[j + 1] > maxHeap[j]))
		{
			++j;
		}

		if (maxHeap[j] <= maxHeap[i])
		{
			break;
		}

		swap(maxHeap[i], maxHeap[j]);

		i = j;
		j = 2 * i + 1;
	}

	return true;
}

template<typename T>
bool CreateMaxHeap(T *maxHeap, const int n)
{
	if ((NULL == maxHeap) || (n <= 0))
	{
		return true;
	}

	for (int i = (n >> 1) - 1; i >= 0; --i)
	{
		MaxHeapFixDown(maxHeap, i, n);
	}

	return true;
}

template<typename T>
bool MaxHeapSort(T *maxHeap, const int n)
{
	if ((NULL == maxHeap) || (n <= 0))
	{
		return false;
	}

	CreateMaxHeap(maxHeap, n);

	for (int i = n - 1; i > 0; --i)
	{
		swap(maxHeap[0], maxHeap[i]);

		MaxHeapFixDown(maxHeap, 0, i);
	}

	return true;
}

#endif
