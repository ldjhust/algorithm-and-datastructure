#include <stdio.h>
#include "PreorderCreateBT.h"
#include "BTDepth.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	int depth = BTDepth(root);

	printf("the depth of your binary tree is %d\n", depth);

	return 0;
}
