#ifndef CIRCLEFIRSTNODEOFLIST_H_CIRCLEFIRSTNODEOFLIST_H_
#define CIRCLEFIRSTNODEOFLIST_H_CIRCLEFIRSTNODEOFLIST_H_

#include <stdio.h>

const ListNode *CircleFirstNode(const ListNode *head)
{
	if (NULL == head)
	{
		return NULL;
	}

	const ListNode *pFast = head;
	const ListNode *pSlow = head;

	while ((pFast != NULL) && (pFast->next != NULL))
	{
		pFast = pFast->next->next;
		pSlow = pSlow->next;

		if (pSlow == pFast)
		{
			break;
		}
	}

	if ((NULL == pFast) || (NULL == pSlow->next))
	{
		return NULL;
	}

	pSlow = head;

	while (pFast != pSlow)
	{
		pSlow = pSlow->next;
		pFast = pFast->next;
	}

	return pSlow;
}

#endif
