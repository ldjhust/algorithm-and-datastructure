#include <stdio.h>
#include "CreateList.h"
#include "ReturnLastKthNodeOfList.h"
#include "PrintList.h"

int main(int argc, char *argv[])
{
	ListNode *head = NULL;

	CreateList(head);

	printf("your list:\n");
	PrintList(head);

	const ListNode *num = ReturnLastKthNode(head, 3);
	printf("last %dth node is %d\n", 3, num->val);

	return 0;
}
