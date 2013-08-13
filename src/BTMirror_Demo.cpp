#include <stdio.h>
#include "PreorderCreateBT.h"
#include "BTMirror.h"
#include "PreorderOfBT.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);
	
	printf("the preorder of your binary tree is:\n");
	RecursionPreorderOfBT(root);
	printf("\n");

	BTMirror(root);

	printf("the preorder of your binary tree's mirror is:\n");
	RecursionPreorderOfBT(root);
	printf("\n");

	return 0;
}
