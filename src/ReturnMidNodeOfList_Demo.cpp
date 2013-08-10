#include <stdio.h>
#include "CreateList.h"
#include "ReturnMidNodeOfList.h"
#include "PrintList.h"

int main(int argc, char *argv[])
{
	ListNode *head = NULL;

	CreateList(head);

	printf("your list:\n");
	PrintList(head);

	const ListNode *num = ReturnMidNodeOfList(head);
	printf("last mid node is %d\n", num->val);

	return 0;
}
