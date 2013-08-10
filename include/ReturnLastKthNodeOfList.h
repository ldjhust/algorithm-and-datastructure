#ifndef RETURNLASTKTHNODEOFLIST_H_RETURNLASTKTHNODEOFLIST_H_
#define RETURNLASTKTHNODEOFLIST_H_RETURNLASTKTHNODEOFLIST_H_

#include <stdio.h>

const ListNode *ReturnLastKthNode(const ListNode *head, int k)
{
	if (NULL == head)
	{
		return NULL;
	}

	const ListNode *pAhead = head;
	const ListNode *pBehind = head;

	while ((k > 0) && (pBehind != NULL))
	{
		pBehind = pBehind->next;
		--k;
	}

	if (k > 0)
	{
		return NULL;
	}

	while (pBehind != NULL)
	{
		pAhead = pAhead->next;
		pBehind = pBehind->next;
	}

	return pAhead;
}

#endif
