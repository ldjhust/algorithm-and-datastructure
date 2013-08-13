#include <stdio.h>
#include "PreorderCreateBT.h"
#include "GetLastCommonAncestor.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	const TreeNode *ancestor = GetLastCommonAncestor(root, root->left->left, root->left->left->right);

	printf("the given two nodes's last common ancestor is %d\n", ancestor->val);

	return 0;
}
