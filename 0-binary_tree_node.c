#include "binary_trees.h"

/**
 * binary_tree_node - create a new node of an binary tree
 * @parent: input parent pointer of the graph
 * @value: input value of the new node
 * Return: new node binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = NULL;

	root = malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);
	root->n = value;
	root->left = NULL;
	root->right = NULL;

	if (parent)
		root->parent = parent;

	return (root);
}
