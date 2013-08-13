#include <stdio.h>
#include "PreorderCreateBT.h"
#include "isSameStructure.h"

int main(int argc, char *argv[])
{
	TreeNode *root1 = NULL;
	TreeNode *root2 = NULL;

	PreorderCreateBT(root1);
	PreorderCreateBT(root2);

	bool res = isSameStructure(root1, root2);

	if (res)
	{
		printf("the two binary tree are the same structure\n");
	}
	else
	{
		printf("the two bianry tree are not the same structure\n");
	}

	return 0;
}
