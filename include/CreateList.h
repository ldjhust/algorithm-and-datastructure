#ifndef CREATElIST_H_CREATElIST_H_
#define CREATElIST_H_CREATElIST_H_

#include <stdio.h>

struct ListNode
{
	int val;

	ListNode *next;
};

void CreateList(ListNode *&head)
{
	int val;
	int nFlag = 1;
	scanf("%d%d", &val, &nFlag);

	if (0 != nFlag)
	{
		head = new ListNode;

		head->val = val;
		head->next = NULL;
	}
	else
	{
		return;
	}

	ListNode *pTmp = head;

	scanf("%d%d", &val, &nFlag);

	while (0 != nFlag)
	{
		pTmp->next = new ListNode;

		pTmp = pTmp->next;
		pTmp->val = val;
		pTmp->next = NULL;

		scanf("%d%d", &val, &nFlag);
	}
}

#endif
