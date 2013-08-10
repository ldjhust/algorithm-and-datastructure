#ifndef RETURNMIDNODEOFLIST_H_RETURNMIDNODEOFLIST_H_
#define RETURNMIDNODEOFLIST_H_RETURNMIDNODEOFLIST_H_

#include <stdio.h>

// odd size return n/2 + 1, even size return n/2
const ListNode *ReturnMidNodeOfList(const ListNode *head)
{
	if ((NULL == head) || (NULL == head->next))
	{
		return head;
	}

	const ListNode *pFast = head;
	const ListNode *pSlow = head;

	while ((pFast->next != NULL) && (pFast->next->next != NULL))
	{
		pSlow = pSlow->next;
		pFast = pFast->next->next;
	}

	return pSlow;
}

#endif
