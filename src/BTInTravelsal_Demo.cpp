#include <stdio.h>
#include "PreorderCreateBT.h"
#include "InorderOfBT.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	printf("inorder of BT by recursion:\n");
	RecursionInorderOfBT(root);
	printf("\n");

	printf("inorder of BT by loop:\n");
	LoopInorderOfBT(root);
	printf("\n");

	return 0;
}
