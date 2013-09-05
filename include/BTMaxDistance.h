#ifndef BTMAXDISTANCE_H_BTMAXDISTANCE_H_
#define BTMAXDISTANCE_H_BTMAXDISTANCE_H_

#include <stdio.h>
#include "BTDepth.h"

int BTMaxDistance(const TreeNode *root)
{
	if (NULL == root)
	{
		return 0;
	}

	int leftDistance = BTMaxDistance(root->left);
	int rightDistance = BTMaxDistance(root->right);

	int leftDepth = BTDepth(root->left);
	int rightDepth = BTDepth(root->right);
	int distance = leftDepth + rightDepth + 1;

	if (leftDistance > rightDistance)
	{
		if (leftDistance > distance)
		{
			distance = leftDistance;
		}
    }
    else
    {
		if (rightDistance > distance)
		{
            distance = rightDistance;
		}
	}

	return distance;
}

#endif
