#ifndef BTMAXDISTANCE_H_BTMAXDISTANCE_H_
#define BTMAXDISTANCE_H_BTMAXDISTANCE_H_

#include <stdio.h>
#include "BTDepth.h"

struct Res
{
	int leftDistance;
	int rightDistance;
	int MaxDistance;
};

Res BTMaxDistance(const TreeNode *root)
{
	Res res;

	res.leftDistance = 0;
	res.rightDistance = 0;
	res.MaxDistance = 0;

	if (NULL == root)
	{
		return res;
	}

	Res	leftRes = BTMaxDistance(root->left);
	Res rightRes = BTMaxDistance(root->right);

	int leftDepth = BTDepth(root->left);
	int rightDepth = BTDepth(root->right);
	int distance = leftDepth + rightDepth + 1;

	if (leftRes.MaxDistance > rightRes.MaxDistance)
	{
		if (leftRes.MaxDistance > distance)
		{
			res.MaxDistance = leftRes.MaxDistance;
		}
		else
		{
			res.MaxDistance = distance;
		}
	}
	else
	{
		if (rightRes.MaxDistance > distance)
		{
			res.MaxDistance = rightRes.MaxDistance;
		}
		else
		{
			res.MaxDistance = distance;
		}
	}

	return res;
}

#endif
