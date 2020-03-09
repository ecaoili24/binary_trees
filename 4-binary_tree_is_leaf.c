#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node->right && !node->left)
		return (1);
	else
		return (0);
}
