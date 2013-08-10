#ifndef PRINTLIST_H_PRINTLIST_H_
#define PRINTLIST_H_PRINTLIST_H_

#include <stdio.h>

void PrintList(const ListNode *head)
{
	if (NULL == head)
	{
		return;
	}

	const ListNode *pTmp = head;

	while (pTmp != NULL)
	{
		printf("%d ", pTmp->val);

		pTmp = pTmp->next;
	}
}

#endif
