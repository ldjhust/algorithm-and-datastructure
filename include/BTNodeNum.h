#ifndef BTNODENUM_H_BTNODENUM_H_
#define BTNODENUM_H_BTNODENUM_H_

#include <stdio.h>

int BTNodeNum(const TreeNode *root)
{
	if (NULL == root)
	{
		return 0;
	}

	return 1 + BTNodeNum(root->left) + BTNodeNum(root->right);
}

#endif
