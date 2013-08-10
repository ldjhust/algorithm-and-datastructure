#ifndef SUBARRAYMAXSUM_H_SUBARRAYMAXSUM_H_
#define SUBARRAYMAXSUM_H_SUBARRAYMAXSUM_H_

#include <stdio.h>

bool bFlag = true;

template<typename T>
T SubArrayMaxSum(const T *array, const int n)
{
	if ((NULL == array) || (n <= 0))
	{
		bFlag = false;

		return 0;
	}

	T currSum = 0;
	T maxSum = array[0];

	for (int i = 0; i < n; ++i)
	{
		if (currSum <= 0)
		{
			currSum = array[i];
		}
		else
		{
			currSum += array[i];
		}

		if (currSum > maxSum)
		{
			maxSum = currSum;
		}
	}

	return maxSum;
}

#endif
