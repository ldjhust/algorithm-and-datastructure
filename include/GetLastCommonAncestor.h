#ifndef GETLASTCOMMONANCESTOR_H_GETLASTCOMMONANCESTOR_H_
#define GETLASTCOMMONANCESTOR_H_GETLASTCOMMONANCESTOR_H_

#include <stdio.h>
#include <queue>

using namespace std;

bool GetPath(const TreeNode *root, const TreeNode *target, 
			 queue<const TreeNode *> &path)
{
	if ((NULL == root) || (NULL == target))
	{
		return false;
	}

	if (root == target)
	{
		path.push(root);

		return true;
	}

	path.push(root);

	bool find = GetPath(root->left, target, path);

	if (!find)
	{
		find = GetPath(root->right, target, path);
	}

	if (!find)
	{
		path.pop();

		return false;
	}

	return true;
}

const TreeNode *GetLastCommonAncestor(const TreeNode *root, 
		const TreeNode *Node1, const TreeNode *Node2)
{
	if ((NULL == root) || (NULL == Node1) || (NULL == Node2))
	{
		return NULL;
	}

	queue<const TreeNode *> path1;
	
	bool find = GetPath(root, Node1, path1);

	if (!find)
	{
		return NULL;
	}

	queue<const TreeNode *> path2;

	find = GetPath(root, Node2, path2);

	if (!find)
	{
		return NULL;
	}

	const TreeNode *res = NULL;

	while ((!path1.empty()) && (!path2.empty()) && (path1.front() == path2.front()))
	{
		res = path1.front();
		path1.pop();
		path2.pop();
	}

	// no matter found or not, res is the last result(NULL or last common ancestor
	return res;
}

#endif
