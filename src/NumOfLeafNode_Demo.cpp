#include <stdio.h>
#include "PreorderCreateBT.h"
#include "NumOfLeafNode.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	int num = 0;

	NumOfLeafNode(root, num);

	printf("the number of leaf node in your binary tree is: %d\n", num);

	return 0;
}
