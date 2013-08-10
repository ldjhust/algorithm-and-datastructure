#ifndef FINDNUMCOUNTMOST_H_FINDNUMCOUNTMOST_H_
#define FINDNUMCOUNTMOST_H_FINDNUMCOUNTMOST_H_

#include <stdio.h>
#include <map>

using namespace std;

bool bFlag = true;

// return the num who's count is most
int FindNumCountMost(const int *array, const int n)
{
	if ((NULL == array) || (n <= 0))
	{
		bFlag = false;

		return 0;
	}

	map<int, size_t> m;
	map<int, size_t>::iterator it;

	for (int i = 0; i < n; ++i)
	{
		it = m.find(array[i]);

		if (m.end() == it)
		{
			m[array[i]] = 1;
		}
		else
		{
			++(it->second);
		}
	}

	it = m.begin();

	for (map<int, size_t>::iterator it1 = m.begin(); it1 != m.end(); ++it1)
	{
		if ((it1->second) > (it->second))
		{
			it = it1;
		}
	}

	return it->first;
}

#endif
