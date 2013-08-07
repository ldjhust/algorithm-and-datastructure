#ifndef PREORDEROFBT_H_PREORDEROFBT_H_
#define PREORDEROFBT_H_PREORDEROFBT_H_

#include <stdio.h>
#include <stack>

using namespace std;

// recursion preorder travelsal of BT
void RecursionPreorderOfBT(const TreeNode *root)
{
	if (NULL == root)
	{
		return;
	}

	printf("%d ", root->val);

	RecursionPreorderOfBT(root->left);

	RecursionPreorderOfBT(root->right);
}

// loop preorder travelsal of BT
void LoopPreorderOfBT(const TreeNode *root)
{
	if (NULL == root)
	{
		return;
	}

	stack<const TreeNode *> s;
	const TreeNode *pTmp = NULL;

	s.push(root);

	while (!s.empty())
	{
		pTmp = s.top();
		printf("%d ", pTmp->val);
		s.pop();

		if (pTmp->right != NULL)
		{
			s.push(pTmp->right);
		}
		
		if (pTmp->left != NULL)
		{
			s.push(pTmp->left);
		}
	}
}

#endif
