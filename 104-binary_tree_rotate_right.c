#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *aux, *temp;

	if (tree == NULL)
		return (NULL);
	if (tree->left)
	{
		temp = tree->left->right;
		aux = tree->left;
		aux->parent = tree->parent;
		aux->right = tree;
		tree->parent = aux;
		tree->left = temp;
		if (temp)
			temp->parent = tree;
		return (aux);
	}
	return (NULL);
}
