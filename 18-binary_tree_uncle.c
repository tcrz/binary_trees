#include "binary_trees.h"

/**
 * binary_tree_uncle- checks if a node has an uncle
 * @node: node to find uncle of
 * Return: return uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->parent)
	{
		if (node->parent->parent->left != node->parent)
			return (node->parent->parent->left);
		else if (node->parent->parent->right != node->parent)
			return (node->parent->parent->right);
	}
	return (NULL);
}
