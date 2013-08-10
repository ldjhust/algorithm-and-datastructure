#include <stdio.h>
#include "CreateList.h"
#include "ReverseList.h"
#include "PrintList.h"

int main(int argc, char *argv[])
{
	ListNode *head = NULL;

	CreateList(head);
	
	printf("before reverse:\n");
	PrintList(head);
	printf("\n");

	ReverseList(head);

	printf("after reverse:\n");
	PrintList(head);
	printf("\n");

	return 0;
}
