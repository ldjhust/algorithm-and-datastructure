#ifndef REVERSELIST_H_REVERSELIST_H_
#define REVERSELIST_H_REVERSELIST_H_

#include <stdio.h>

bool ReverseList(ListNode *&head)
{
	if (NULL == head)
	{
		return false;
	}

	if (NULL == head->next)
	{
		return true;
	}

	ListNode *pre = head;
	ListNode *curr = head->next;
	ListNode *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = pre;
		pre = curr;
		curr = next;
	}

	head->next = NULL;
	head = pre;

	return true;
}

#endif
