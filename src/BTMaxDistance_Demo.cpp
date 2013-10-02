#include <stdio.h>
#include "PreorderCreateBT.h"
#include "BTMaxDistance.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	int res = BTMaxDistance(root);

	printf("the max distance of your binary tree is %d\n", res);

	return 0;
}
