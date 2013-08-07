#include <stdio.h>
#include "PreorderCreateBT.h"
#include "PreorderOfBT.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	printf("preorder of BT by recursion:\n");
	RecursionPreorderOfBT(root);
	printf("\n");

	printf("preorder of BT by loop:\n");
	LoopPreorderOfBT(root);
	printf("\n");

	return 0;
}
