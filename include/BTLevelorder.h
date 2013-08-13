#ifndef BTLEVELORDER_H_BTLEVELORDER_H_
#define BTLEVELORDER_H_BTLEVELORDER_H_

#include <stdio.h>
#include <queue>

using namespace std;

void BTLevelorder(const TreeNode *root)
{
	if (NULL == root)
	{
		return;
	}

	queue<const TreeNode *> q;
	const TreeNode *pTmp = NULL;

	q.push(root);

	while (!q.empty())
	{
		pTmp = q.front();
		printf("%d ", pTmp->val);
		q.pop();

		if (pTmp->left != NULL)
		{
			q.push(pTmp->left);
		}

		if (pTmp->right != NULL)
		{
			q.push(pTmp->right);
		}
	}

	printf("\n");
}

#endif
