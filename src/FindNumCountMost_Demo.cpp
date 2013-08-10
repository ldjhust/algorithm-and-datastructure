#include <stdio.h>
#include "FindNumCountMost.h"

int main(int argc, char *argv[])
{
	int array[] = {0, 5, 2, 1, 1, 5, 1, 6, 1, 1, 1, 1};

	int num = FindNumCountMost(array, 12);

	printf("%d\n", num);

	return 0;
}
