#ifndef POSTORDEROFBT_H_POSTORDEROFBT_H_
#define POSTORDEROFBT_H_POSTORDEROFBT_H_

#include <stdio.h>
#include <stack>

using namespace std;

// recursion postorder of BT
void RecursionPostorderOfBT(const TreeNode *root)
{
	if (NULL == root)
	{
		return;
	}

	RecursionPostorderOfBT(root->left);

	RecursionPostorderOfBT(root->right);

	printf("%d ", root->val);
}

// loop postorder of BT
void LoopPostorderOfBT(const TreeNode *root)
{
	if (NULL == root)
	{
		return;
	}

	stack<const TreeNode *> s;
	const TreeNode *previewed = NULL;
	const TreeNode *curr = root;

	while ((curr != NULL) || (!s.empty()))
	{
		while (curr != NULL)
		{
			s.push(curr);
			curr = curr->left;
		}

		curr = s.top();

		if ((NULL == curr->right) || (previewed == curr->right))
		{
			printf("%d ", curr->val);
			previewed = curr;
			curr = NULL;

			s.pop();
		}
		else
		{
			curr = curr->right;
		}
	}
}

#endif
