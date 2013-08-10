#ifndef DELETELISTNODE_H_DELETELISTNODE_H_
#define DELETELISTNODE_H_DELETELISTNODE_H_

#include <stdio.h>
#include <malloc.h>

void DeleteListNode(ListNode *&head, ListNode *target)
{
	if ((NULL == head) || (NULL == target))
	{
		return;
	}

	if (target->next != NULL)
	{
		target->val = target->next->val;

		ListNode *pTmp = target->next;
		target->next = pTmp->next;

		free(pTmp);
		pTmp = NULL;
	}
	else
	{
		if (head == target)
		{
			head = NULL;

			free(target);
			target = NULL;
		}
		else
		{
			ListNode *pTmp = head;

			while (pTmp->next != target)
			{
				pTmp = pTmp->next;
			}

			pTmp->next = target->next;

			free(target);
			target = NULL;
		}
	}
}

#endif
