#include <stdio.h>
#include "PreorderCreateBT.h"
#include "RebuildBTByPreAndIn.h"
#include "PostorderOfBT.h"

int main(int argc, char *argv[])
{
	int pre[] = {1, 2, 3, 4, 5, 6, 7};
	int in[] = {3, 2, 4, 1, 6, 5, 7};

	TreeNode *root = RebuildBTByPreAndIn(pre, in, 7);

	printf("the post order of your binary is:\n");
	RecursionPostorderOfBT(root);
	printf("\n");

	return 0;
}
