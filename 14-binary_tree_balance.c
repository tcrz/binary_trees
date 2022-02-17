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
 * tree_height - finds height of binary tree
 * @tree: binary tree
 * Return: Height of tree
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	return (max(left_height, right_height) + 1);
}
/**
 * binary_tree_balance- counts the nodes with at least 1 child in a binary tree
 * @tree: binary tree
 * Return: number of nodes with atleast one child
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return  (tree_height(tree->left) - tree_height(tree->right));
}
