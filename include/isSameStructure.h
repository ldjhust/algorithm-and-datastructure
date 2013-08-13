#ifndef ISSAMESTRUCTURE_H_ISSAMESTRUCTURE_H_
#define ISSAMESTRUCTURE_H_ISSAMESTRUCTURE_H_

#include <stdio.h>

bool isSameStructure(const TreeNode *root1, const TreeNode *root2)
{
	if ((NULL == root1) && (NULL == root2))
	{
		return true;
	}

	if ((NULL == root1) || (NULL == root2))
	{
		return false;
	}

	bool res = isSameStructure(root1->left, root2->left) && isSameStructure(root1->right, root2->right);

	return res;
}

#endif
