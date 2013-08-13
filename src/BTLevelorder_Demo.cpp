#include <stdio.h>
#include "PreorderCreateBT.h"
#include "BTLevelorder.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	printf("your binary tree's level order is:\n");
	BTLevelorder(root);

	return 0;
}
