#include <stdio.h>
#include "PreorderCreateBT.h"
#include "isCompletedBT.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	bool isComplete = isCompletedBT(root);

	if (isComplete)
	{
		printf("yes, your binary tree is completed\n");
	}
	else
	{
		printf("no, your binary tree is not completed\n");
	}

	return 0;
}
