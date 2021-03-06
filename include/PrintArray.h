#ifndef PRINTARRAY_H_PRINTARRAY_H_
#define PRINTARRAY_H_PRINTARRAY_H_

#include <stdio.h>

template<typename T>
bool printarray(const T *array, const int n)
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

#endif
