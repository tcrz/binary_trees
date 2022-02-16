#include "binary_trees.h"

/**
 * max - finds max value
 * @x: size_t value
 * @y: size_t value
 * Return: max value
 */

size_t max(size_t x, size_t y)
{
	if (x > y)
		return (x);
	return (y);
}

/**
 * binary_tree_height - finds height of binary tree
 * @tree: binary tree
 * Return: Height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree  || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (max(left_height, right_height) + 1);
}
