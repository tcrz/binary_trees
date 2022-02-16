#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root(node at the top)
 * @node: node to check
 * Return: 1 if root, 0 if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	else
		return (0);
}
