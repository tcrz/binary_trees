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
	left_insert->right = NULL;
	left_insert->parent = parent;
	if (!(parent->left))
	{
		parent->left = left_insert;
		left_insert->left = NULL;
	}
	else
	{
		temp = parent->left;
		left_insert->left = temp;
		temp->parent = left_insert;
		parent->left = left_insert;
	}
	return (left_insert);
}

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_left(root->right, 128);
    binary_tree_insert_left(root, 54);
	binary_tree_insert_left(root, 4);
    binary_tree_print(root);
    return (0);
}
