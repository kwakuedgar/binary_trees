#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *aux, *temp;

	if (tree == NULL)
		return (NULL);
	if (tree->right)
	{
		temp = tree->right->left;
		aux = tree->right;
		aux->parent = tree->parent;
		aux->left = tree;
		tree->parent = aux;
		tree->right = temp;
		if (temp)
			temp->parent = tree;
		return (aux);
	}
	return (NULL);
}
