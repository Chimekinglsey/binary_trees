#include "binary_trees.h"
/**
* binary_tree_leaves - a function to determine count of leafs of a tree
* @tree: pointer to the node to evaluate its depth
* Return: an unsigned int value of depth
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	unsigned int countleft = 0, countright = 0;

	if (!tree)
		return (0);
	if (tree->left)
		{
			binary_tree_leaves(tree->left);
			if (tree->left == NULL)
				countleft++;
			if (tree->right == NULL)
				countleft++;
			else if (tree->left == NULL && tree->right == NULL)
				countleft += 2;
		}
		
	if (tree->right)
		{
			binary_tree_leaves(tree->right);
			if (tree->left == NULL || tree->right == NULL)
				countright++;
		}

	return (countright + countleft);
}
