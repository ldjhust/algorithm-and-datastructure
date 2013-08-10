#include <stdio.h>
#include "CreateList.h"
#include "PrintList.h"
#include "ListFirstIntersectNode.h"

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
	
	const ListNode *ptmp = FirstIntersectNode(head1, head2);
	
	if (NULL == ptmp)
	{
		printf("the two list is not intesect.\n");
	}
	else
	{
		printf("first intersect node is %d\n", ptmp->val);
	}

	return 0;
}
