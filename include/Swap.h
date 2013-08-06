#ifndef SWAP_H_SWAP_H_
#define SWAP_H_SWAP_H_

void swap(int &a, int &b)
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
