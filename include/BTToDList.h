#ifndef BTTODLIST_H_BTTODLIST_H_
#define BTTODLIST_H_BTTODLIST_H_

#include <stdio.h>

void BTToDList(TreeNode *root, TreeNode *&pLastNode)
{
	if (NULL == root)
	{
		return;
	}

	if (root->left != NULL)
	{
		BTToDList(root->left, pLastNode);
	}

	root->left = pLastNode;

	if (pLastNode != NULL)
	{
		pLastNode->right = root;
	}

	pLastNode = root;

	if (root->right != NULL)
	{
		BTToDList(root->right, pLastNode);
	}
}

TreeNode *BTToDList(TreeNode *root)
{
	if (NULL == root)
	{
		return NULL;
	}

	TreeNode *pLastNode = NULL;

	BTToDList(root, pLastNode);

	while (pLastNode->left != NULL)
	{
		pLastNode = pLastNode->left;
	}

	return pLastNode;
}

#endif
