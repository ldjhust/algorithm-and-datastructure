#include <stdio.h>
#include "CreateList.h"
#include "PrintList.h"
#include "MergeList.h"

int main(int argc, char *argv[])
{
	ListNode *head1 = NULL;
	ListNode *head2 = NULL;
	
	CreateList(head1);
	CreateList(head2);

	printf("your list one is\n");
	PrintList(head1);
	printf("\n");

	printf("your list two is\n");
	PrintList(head2);
	printf("\n");

	ListNode *pRes = MergeList(head1, head2);

	printf("after merge:\n");
	PrintList(pRes);
	printf("\n");

	return 0;
}
