#include <stdio.h>
#include "CreateList.h"
#include "PrintList.h"
#include "ReversePrintList.h"

int main(int argc, char *argv[])
{
	ListNode *head = NULL;

	CreateList(head);

	printf("your list:\n");
	PrintList(head);
	printf("\n");

	printf("reverse print your list:\n");
	ReversePrintList(head);
	printf("\n");

	return 0;
}
