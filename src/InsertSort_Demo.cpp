#include "Swap.h"
#include "InsertSort.h"
#include "PrintArray.h"

int main(int argc, char *argv[])
{
	int array[] = {10, 9, 4, 3, 6, 2, 8, 1, 7, 5};
	
	printf("before sort:\n");
	printarray(array, 10);
	
	InsertSort(array, 10);
	
	printf("afte sort:\n");
	printarray(array, 10);
	
	return 0;	
}
