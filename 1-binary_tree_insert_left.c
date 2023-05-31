#include "binary_trees.h"
/**
* binary_tree_insert_left - a function that inserts a node as the
*	left-child of another node
*
* @parent: pointer to the node to insert the left-child in
* @value: the value to store in the new  node
* Return: a pointer to the created node or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (insert == NULL)
		return (NULL);

	insert->parent = parent;
	insert->left = NULL;
	insert->right = NULL;
	insert->n = value;

	if (parent->left != NULL)
		insert->left = parent->left;
	parent->left = insert;
	return (insert);
}
