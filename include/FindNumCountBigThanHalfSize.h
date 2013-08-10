#ifndef FINDNUMCOUNTBIGTHANHALFSIZE_H_FINDNUMCOUNTBIGTHANHALFSIZE_H_
#define FINDNUMCOUNTBIGTHANHALFSIZE_H_FINDNUMCOUNTBIGTHANHALFSIZE_H_

#include <stdio.h>

bool bFlag = true;

// return the num who's count is big than the half of the array
template<typename T>
T FindNumCountBigThanHalfSize(const T *array, const int n)
{
	if ((NULL == array) || (n <= 0))
	{
		bFlag = false;

		return (T)0;
	}

	T currNum;
	T currNumCount = 0;

	for (int i = 0; i < n; ++i)
	{
		if (0 == currNumCount)
		{
			currNum = array[i];
		}
		else
		{
			if (currNum == array[i])
			{
				++currNumCount;
			}
			else
			{
				--currNumCount;
			}
		}
	}

	return currNum;
}

#endif
