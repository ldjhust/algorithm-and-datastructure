#ifndef INORDEROFBT_H_INORDEROFBT_H_
#define INORDEROFBT_H_INORDEROFBT_H_

#include <stdio.h>
#include <stack>

using namespace std;

// recursion inorder of BT
void RecursionInorderOfBT(const TreeNode *root)
{
	if (NULL == root)
	{
		return;
	}

	RecursionInorderOfBT(root->left);

	printf("%d ", root->val);

	RecursionInorderOfBT(root->right);
}

// loop inorder of BT
void LoopInorderOfBT(const TreeNode *root)
{
	if (NULL == root)
	{
		return;
	}

	stack<const TreeNode *> s;
	const TreeNode *curr = root;

	while ((curr != NULL) || (!s.empty()))
	{
		while (curr != NULL)
		{
			s.push(curr);
			curr = curr->left;
		}

		curr = s.top();
		printf("%d ", curr->val);
		s.pop();

		curr = curr->right;
	}
}

#endif
