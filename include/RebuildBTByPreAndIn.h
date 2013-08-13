#ifndef REBUILDBTBYPREANDIN_H_REBUILDBTBYPREANDIN_H_
#define REBUILDBTBYPREANDIN_H_REBUILDBTBYPREANDIN_H_

#include <stdio.h>

bool bFlag = true;

TreeNode *RebuildBTByPreAndIn(const int *pre, const int *in, const int n)
{
	if ((NULL == pre) || (NULL == in) || (n < 0))
	{
		bFlag = false;
		
		return NULL;	
	}

	if (0 == n)
	{
		return NULL;
	}

	int i = 0;

	while ((in[i] != pre[0]) && (i < n))
	{
		++i;
	}

	TreeNode *root = new TreeNode;

	root->val = pre[0];

	root->left = RebuildBTByPreAndIn(pre + 1, in, i);
	root->right = RebuildBTByPreAndIn(pre + i + 1, in + i + 1, n - i -1);

	return root;
}

#endif
