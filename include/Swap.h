#ifndef SWAP_H_SWAP_H_
#define SWAP_H_SWAP_H_

template<typename T>
void swap(T &a, T &b)
{
	if (a == b)
	{
		return;
	}

	a ^= b;
	b ^= a;
	a ^= b;
}

#endif
