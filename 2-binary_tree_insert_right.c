#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: value to put in the new node
 * Return: returns a new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = NULL;

	if (!newnode || !parent)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;
	if (!(parent->left))
		parent->right = newnode;
	else
	{
		temp = parent->right;
		parent->right = newnode;
		newnode->right = temp;
	}
	return (newnode);
}

