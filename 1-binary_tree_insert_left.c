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

	if (!parent || !left_insert)
		return (NULL);
	left_insert->n = value;
	left_insert->right = NULL;
	left_insert->parent = parent;
	if ((parent->left))
	{
		temp = parent->left;
		parent->left = left_insert;
		left_insert->left = temp;
		temp->parent = left_insert;
		return (left_insert);
	}
	else
	{
		parent->left = left_insert;
		left_insert->left = NULL;
		return (left_insert);

	}

}



