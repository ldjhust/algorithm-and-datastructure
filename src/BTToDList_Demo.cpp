#include <stdio.h>
#include "PreorderCreateBT.h"
#include "BTToDList.h"

int main(int argc, char *argv[])
{
	TreeNode *root = NULL;

	PreorderCreateBT(root);

	TreeNode *head = NULL;

	head = BTToDList(root);

	printf("your binary tree convert to dlist is:\n");
	
	for (; head->right != NULL; head = head->right)
	{
		printf ("%d ", head->val);
	}

	printf("%d\n", head->val);

	for (; head->left != NULL; head = head->left)
	{
		printf("%d ", head->val);
	}

	printf("%d\n", head->val);

	return 0;
}
