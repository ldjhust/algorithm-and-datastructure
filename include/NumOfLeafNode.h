#ifndef NUMOFLEAFNODE_H_NUMOFLEAFNODE_H_
#define NUMOFLEAFNODE_H_NUMOFLEAFNODE_H_

#include <stdio.h>

void NumOfLeafNode(const TreeNode *root, int &num)
{
	if (NULL == root)
	{
		return;
	}

	if ((NULL == root->left) && (NULL == root->right))
	{
		++num;
		
		return;
	}

	if (root->left != NULL)
	{
		NumOfLeafNode(root->left, num);
	}

	if (root->right != NULL)
	{
		NumOfLeafNode(root->right, num);
	}
}

#endif
