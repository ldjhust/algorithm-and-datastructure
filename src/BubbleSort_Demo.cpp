#include <stdio.h>
#include "Swap.h"
#include "BubbleSort.h"
#include "PrintArray.h"

int main(int argc, char *argv[])
{
	int array[] = {10, 9, 4, 3, 6, 2, 8, 1, 7, 5};
	
	printf("befor bubble sort:\n");
	printarray(array, 10);
	
	BubbleSort(array, 10);
	
	printf("afte bubble sort:\n");
	printarray(array, 10);
	
	return 0;	
}
