#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: tree to be rotated
 * Return: pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL)
		return (NULL);
	tree->parent = tree->left;
	if (tree->left->right)
	{
		tree->left->parent = tree;
		tree->left = tree->parent->right;
	}
	else
		tree->left = NULL;

	tree->parent->parent = NULL;
	tree->parent->right = tree;
	return (tree->parent);
}
