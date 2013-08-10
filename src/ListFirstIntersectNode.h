#ifndef LISTFIRSTINTERSECTNODE_H_LISTFIRSTINTERSECTNODE_H_
#define LISTFIRSTINTERSECTNODE_H_LISTFIRSTINTERSECTNODE_H_

#include <stdio.h>

const ListNode *FirstIntersectNode(const ListNode *head1, const ListNode *head2)
{
	if ((NULL == head1) || (NULL == head2))
	{
		return NULL;
	}

	const ListNode *pTmp1 = head1;
	size_t NodeNum1 = 1;

	const ListNode *pTmp2 = head2;
	size_t NodeNum2 = 1;

	while (pTmp1->next != NULL)
	{
		pTmp1 = pTmp1->next;
		++NodeNum1;
	}

	while (pTmp2->next != NULL)
	{
		pTmp2 = pTmp2->next;
		++NodeNum2;
	}

	if (pTmp1 != pTmp2)
	{
		return NULL;
	}

	if (NodeNum1 > NodeNum2)
	{
		size_t gap = NodeNum1 - NodeNum2;

		pTmp1 = head1;
		pTmp2 = head2;

		while (gap-- > 0)
		{
			pTmp1 = pTmp1->next;
		}

		while (pTmp1 != pTmp2)
		{
			pTmp1 = pTmp1->next;
			pTmp2 = pTmp2->next;
		}
	}
	else
	{
		size_t gap = NodeNum2 - NodeNum1;

		pTmp1 = head1;
		pTmp2 = head2;

		while (gap-- > 0)
		{
			pTmp2 = pTmp2->next;
		}

			while (pTmp1 != pTmp2)
		{
			pTmp1 = pTmp1->next;
			pTmp2 = pTmp2->next;
		}
	}

	return pTmp1;
}

#endif
