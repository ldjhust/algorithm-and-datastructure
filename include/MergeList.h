#ifndef MERGELIST_H_MERGELIST_H_
#define MERGELIST_H_MERGELIST_H_

#include <stdio.h>

ListNode *MergeList(ListNode *head1, ListNode *head2)
{
	if (NULL == head1)
	{
		return head2;
	}

	if (NULL == head2)
	{
		return head1;
	}

	if (head1->val < head2->val)
	{
		head1->next = MergeList(head1->next, head2);

		return head1;
	}
	else
	{
		head2->next = MergeList(head1, head2->next);

		return head2;
	}
}

#endif
