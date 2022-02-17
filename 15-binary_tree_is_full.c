#include "binary_trees.h"

/**
 * binary_tree_is_full- checks if binary tree is full
 * @tree: binary tree
 * Return: return 1 if full otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
