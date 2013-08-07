#include <stdio.h>
#include "BSearch.h"

int main(int argc, char *argv[])
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int index = BSearch(array, 10, 6);

	printf("target = %d 's index is %d.\n", 6, index);

	return 0;
}
