#include <stdio.h>
#include "PreorderCreateBT.h"
#include "PostorderOfBT.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	printf("postorder of BT by recursion:\n");
	RecursionPostorderOfBT(root);
	printf("\n");

	printf("postorder of BT by loop:\n");
	LoopPostorderOfBT(root);
	printf("\n");

	return 0;
}
