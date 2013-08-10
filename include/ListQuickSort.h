#ifndef LISTQUICKSORT_H_LISTQUICKSORT_H_
#define LISTQUICKSORT_H_LISTQUICKSORT_H_

#include <stdio.h>
#include "Swap.h"

void ListQuickSort(ListNode *head, ListNode *tail)
{
	if ((NULL == head) || (NULL == tail))
	{
		return;
	}

	ListNode *pAhead = head;
	ListNode *pBehind = head->next;
	ListNode *pTmp = NULL;

	while ((pBehind != NULL) && (pBehind != tail->next))
	{
		if ((pBehind->val) <= head->val)
		{
			pTmp = pAhead;
			pAhead = pAhead->next;

			swap(pAhead->val, pBehind->val);
		}

		pBehind = pBehind->next;
	}

	swap(head->val, pAhead->val);

	ListQuickSort(head, pTmp);

	ListQuickSort(pAhead->next, tail);
}

void ListQuickSort(ListNode *head)
{
	if (NULL == head)
	{
		return;
	}

	ListNode *tail = head;

	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	ListQuickSort(head, tail);
}

#endif
