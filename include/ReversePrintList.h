#ifndef REVERSEPRINTLIST_H_REVERSEPRINTLIST_H_
#define REVERSEPRINTLIST_H_REVERSEPRINTLIST_H_

#include <stdio.h>

void ReversePrintList(const ListNode *head)
{
	if (NULL == head)
	{
		return;
	}

	ReversePrintList(head->next);
	printf("%d ", head->val);
}

#endif
