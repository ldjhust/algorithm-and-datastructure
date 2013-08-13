#include <stdio.h>
#include "PreorderCreateBT.h"
#include "KLevelNodeOfBT.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	printf("the %d level node of your binary tree are:\n", 3);
	KLevelNodeOfBT(root, 3);

	return 0;
}
