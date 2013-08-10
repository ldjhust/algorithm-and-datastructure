#ifndef LISTNUMOFNODE_H_LISTNUMOFNODE_H_
#define LISTNUMOFNODE_H_LISTNUMOFNODE_H_

#include <stdio.h>

int NumOfNode(const ListNode *head)
{
	int num = 0;
	const ListNode *pTmp = head;

	while (pTmp != NULL)
	{
		++num;
		pTmp = pTmp->next;
	}

	return num;
}

#endif
