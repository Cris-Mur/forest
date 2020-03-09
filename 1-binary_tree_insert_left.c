#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent: parent of the node at left-insert
 * @value: value of the new node
 * Return: updated tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left = NULL;

	left = malloc(sizeof(binary_tree_t));
	if (!left)
		return (NULL);
	left->n = value;

	if (!parent)
		return (NULL);
	left->right = NULL;
	left->left = NULL;

	left->parent = parent;
	if (!parent->left)
	{
		parent->left = left;
	}
	else
	{
		left->left = parent->left;
		parent->left = left;
		left->left->parent = left;
	}
	return (left);
}
