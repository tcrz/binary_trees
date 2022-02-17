#include "binary_trees.h"

/**
 * tree_depth- checks tree depth
 * @tree: binary tree
 * Return: return depth
 */
int tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);
	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect- checks if binary tree is perfect
 * @depth: tree depth
 * @level: binary tree level
 * @tree: binary tree
 * Return: return 1 if perfect otherwise 0
 */

int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (depth == level + 1);
	if (!tree->left || !tree->right)
		return (0);
	return (is_perfect(tree->left, depth, level + 1) &&
	is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect- checks if binary tree is perfect
 * @tree: binary tree
 * Return: return 1 if perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = tree_depth(tree);

	return (is_perfect(tree, d, 0));
}
