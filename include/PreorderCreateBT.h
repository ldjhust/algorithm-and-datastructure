#ifndef PREORDERCREATEBT_H_PREORDERCREATEBT_H_
#define PREORDERCREATEBT_H_PREORDERCREATEBT_H_

#include <stdio.h>
#include <malloc.h>

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
};

bool PreorderCreateBT(TreeNode *&root)
{
	int tmp;
	int nFlag = 1;

	printf("Please input root value(val nFlag), give nFlag 0 for end:\n");
	scanf("%d%d", &tmp, &nFlag);

	if (0 == nFlag)
	{
		return true;
	}

	if (NULL == (root = (TreeNode *)malloc(sizeof(TreeNode))))
	{
		return false;
	}

	root->val = tmp;

	printf("Create %d's left child\n", root->val);
	PreorderCreateBT(root->left);

	printf("Create %d's right child\n", root->val);
	PreorderCreateBT(root->right);

	return true;
}

#endif
