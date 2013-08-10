#ifndef LISTINTERSECT_H_LISTINTERSECT_H_
#define LISTINTERSECT_H_LISTINTERSECT_H_

#include <stdio.h>

bool isIntersect(const ListNode *head1, const ListNode *head2)
{
	if ((NULL == head1) || (NULL == head2))
	{
		return false;
	}

	const ListNode *pTmp1 = head1;
	const ListNode *pTmp2 = head2;

	while (pTmp1->next != NULL)
	{
		pTmp1 = pTmp1->next;
	}	

	while (pTmp2->next != NULL)
	{
		pTmp2 = pTmp2->next;
	}

	if (pTmp1 == pTmp2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

#endif
