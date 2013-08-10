#include <stdio.h>
#include "SubArrayMaxSum.h"

int main(int argc, char *argv[])
{
	int array[] = {-10, 0, 8, -3, 5, 2, -2, 9, 10, -19};

	int maxSum = SubArrayMaxSum(array, 10);

	printf("%d\n", maxSum);

	return 0;
}
