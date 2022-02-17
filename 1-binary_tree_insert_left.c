#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: value to put in the new node
 * Return: returns a new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_insert = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = NULL;

	if (!left_insert)
		return (NULL);
	if (!parent)
		return (NULL);
	left_insert->n = value;
	left_insert->left = NULL;
	left_insert->right = NULL;
	left_insert->parent = parent;
	if (!(parent->left))
	{
		parent->left = left_insert;

	}
	else
	{
		temp = parent->left;
		parent->left = left_insert;
		left_insert->left = temp;
		temp->left = left_insert;
	}
	return (left_insert);
}
