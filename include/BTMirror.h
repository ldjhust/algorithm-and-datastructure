#ifndef BTMIRROR_H_BTMIRROR_H_
#define BTMIRROR_H_BTMIRROR_H_

#include <stdio.h>

void BTMirror(TreeNode *root)
{
	if (NULL == root)
	{
		return;
	}

	BTMirror(root->left);
	BTMirror(root->right);

	TreeNode *pTmp = root->left;

	root->left = root->right;
	root->right = pTmp;
}

#endif
