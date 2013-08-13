#include <stdio.h>
#include "PreorderCreateBT.h"
#include "isBalanceBT.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	bool res = isBalanceBT(root);

	if (res)
	{
		printf("your tree is balanceed\n");
	}
	else
	{
		printf("your tree is not balanced\n");
	}

	return 0;
}
