#ifndef ISCOMPLETE_H_ISCOMPLETE_H_
#define ISCOMPLETE_H_ISCOMPLETE_H_

#include <stdio.h>
#include <queue>

using namespace std;

bool isCompletedBT(const TreeNode *root)
{
	if (NULL == root)
	{
		return true;
	}

	queue<const TreeNode *> q1;
	queue<const TreeNode *> q2;
	const TreeNode *pTmp = NULL;

	q1.push(root);

	while (!q1.empty())
	{
		while (!q1.empty())
		{
			pTmp = q1.front();
			q1.pop();

			if ((NULL == pTmp->left) || (NULL == pTmp->right))
			{
				if (pTmp->right != NULL)
				{
					return false;
				}

				while (!q1.empty())
				{
					pTmp = q1.front();
					q1.pop();

					if ((pTmp->left != NULL) || (pTmp->right != NULL))
					{
						return false;
					}
				}

				return true;
			}

			q2.push(pTmp->left);
			q2.push(pTmp->right);
		}

		swap(q1, q2);
	}
}

#endif
