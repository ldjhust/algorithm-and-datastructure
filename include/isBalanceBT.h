#ifndef ISBALANCE_H_ISBALANCE_H_
#define ISBALANCE_H_ISBALANCE_H_

#include <stdio.h>
#include <math.h>
#include "BTDepth.h"

bool isBalanceBT(const TreeNode *root)
{
	if (NULL == root)
	{
		return true;
	}

	int leftDepth = BTDepth(root->left);
	int rightDepth = BTDepth(root->right);

	if (fabs(leftDepth - rightDepth) <= 1)
	{
		return isBalanceBT(root->left) && isBalanceBT(root->right);
	}
	else
	{
		return false;
	}
}

#endif
