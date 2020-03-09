#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child of another node
 * @parent: parent of the node at right-insert
 * @value: value of the new node
 * Return: updated tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right = NULL;

	right = malloc(sizeof(binary_tree_t));
	if (!right)
		return (NULL);
	right->n = value;
	right->left = NULL;
	right->right = NULL;

	if (!parent)
		return (NULL);

	if (parent->right)
	{
		right->right = parent->right;
		right->right->parent = right;
	}
	parent->right = right;
	return (right);
}
