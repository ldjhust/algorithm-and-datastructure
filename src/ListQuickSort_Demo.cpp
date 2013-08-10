#include <stdio.h>
#include "CreateList.h"
#include "PrintList.h"
#include "ListQuickSort.h"

int main(int argc, char *argv[])
{
	ListNode *head = NULL;

	CreateList(head);

	printf("your list is:\n");
	PrintList(head);
	printf("\n");

	ListQuickSort(head);

	printf("after sort, your list is:\n");
	PrintList(head);
	printf("\n");

	return 0;
}
