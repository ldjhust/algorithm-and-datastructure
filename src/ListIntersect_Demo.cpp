#include <stdio.h>
#include "CreateList.h"
#include "PrintList.h"
#include "ListIntersect.h"

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

	bool IsIntersect = isIntersect(head1, head1);

	if (IsIntersect)
	{
		printf("the two list is intersect.\n");
	}
	else
	{
		printf("the two list is not intersect.\n");
	}

	return 0;
}
