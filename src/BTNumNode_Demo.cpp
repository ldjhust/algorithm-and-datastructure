#include <stdio.h>
#include "PreorderCreateBT.h"
#include "BTNodeNum.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	int num = BTNodeNum(root);

	printf("your binary tree node number is %d\n", num);

	return 0;
}
