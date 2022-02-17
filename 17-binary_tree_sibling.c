#include "binary_trees.h"

/**
 * binary_tree_sibling- checks if a node has a sibling
 * @node: node to find sibling of
 * Return: return sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	if (node->parent->left || node->parent->right)
	{
		if (node->parent->left != node)
			return (node->parent->left);
		else if (node->parent->right != node)
			return (node->parent->right);
	}
	return (NULL);
}
