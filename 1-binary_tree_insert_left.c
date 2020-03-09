#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));

	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	if (new->left)
		new->left->parent = new;
	new->right = NULL;
	parent->left = new;

	return (new);
}
