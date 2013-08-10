#include <stdio.h>
#include "CreateList.h"
#include "PrintList.h"
#include "DeleteListNode.h"

int main(int argc, char *argv[])
{
	ListNode *head1 = NULL;
	
	CreateList(head1);

	printf("your list is\n");
	PrintList(head1);
	printf("\n");

	DeleteListNode(head1, head1);

	printf("after delete the node you said, your list is\n");
	PrintList(head1);
	printf("\n");
	
	return 0;
}
