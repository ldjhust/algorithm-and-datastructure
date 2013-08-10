#include <stdio.h>
#include "CreateList.h"
#include "ListNumOfNode.h"

int main(int argc, char *argv[])
{
	ListNode *head = NULL;

	CreateList(head);

	int num = NumOfNode(head);

	printf("num of list node: %d\n", num);

	return 0;
}
