#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root(node at the top)
 * @node: node to check
 * Return: 1 if root, 0 if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || !node->parent)
		return (1);
	else
		return (0);
}

int main(void)
{
    binary_tree_t *root;
    int ret;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    ret = binary_tree_is_root(root);
    printf("Is %d a root: %d\n", root->n, ret);
    ret = binary_tree_is_root(root->right);
    printf("Is %d a root: %d\n", root->right->n, ret);
    ret = binary_tree_is_root(root->right->right);
    printf("Is %d a root: %d\n", root->right->right->n, ret);
    return (0);
}