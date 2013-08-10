#ifndef LISTHASCIRCLE_H_LISTHASCIRCLE_H_
#define LISTHASCIRCLE_H_LISTHASCIRCLE_H_

#include <stdio.h>

bool ListHasCircle(const ListNode *head)
{
	if (NULL == head)
	{
		return false;
	}

	const ListNode *pFast = head;
	const ListNode *pSlow = head;

	while ((pFast != NULL) && (pFast->next != NULL))
	{
		pFast = pFast->next->next;
		pSlow = pSlow->next;

		if (pFast == pSlow)
		{
			return true;
		}
	}

	return false;
}

#endif
