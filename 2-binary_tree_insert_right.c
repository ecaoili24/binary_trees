#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to parent
 * @value: value of node
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));

	new->parent = parent;
	new->n = value;
	new->right = parent->right;

	if (new->right)
		new->right->parent = new;
	new->left = NULL;
	parent->right = new;

	return (new);
}
