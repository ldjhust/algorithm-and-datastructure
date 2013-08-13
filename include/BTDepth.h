#ifndef BTDEPTH_H_BTDEPTH_H_
#define BTDEPTH_H_BTDEPTH_H_

#include <stdio.h>

int BTDepth(const TreeNode *root)
{
	if (NULL == root)
	{
		return 0;
	}

	int leftDepth = BTDepth(root->left);
	int rightDepth = BTDepth(root->right);

	return leftDepth > rightDepth ? (leftDepth + 1) : (rightDepth + 1);
}

#endif
