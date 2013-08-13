#ifndef KLEVELNODEOFBT_H_KLEVELNODEOFBT_H_
#define KLEVELNODEOFBT_H_KLEVELNODEOFBT_H_

#include <stdio.h>
#include <stack>

using namespace std;

bool KLevelNodeOfBT(const TreeNode *root, size_t k)
{
	if (NULL == root)
	{
		return false;
	}

	stack<const TreeNode *> s1;
	stack<const TreeNode *> s2;
	const TreeNode *pTmp = NULL;

	s1.push(root);
	--k;

	for (; (k > 0) && (!s1.empty()); --k)
	{
		while (!s1.empty())
		{
			pTmp = s1.top();

			if (pTmp->left != NULL)
			{
				s2.push(pTmp->left);
			}

			if (pTmp->right != NULL)
			{
				s2.push(pTmp->right);
			}

			s1.pop();
		}

		swap(s1, s2);
	}

	if (k > 0)
	{
		return false;
	}

	while (!s1.empty())
	{
		pTmp = s1.top();
		printf("%d ", pTmp->val);
		s1.pop();
	}

	printf("\n");

	return true;
}

#endif
