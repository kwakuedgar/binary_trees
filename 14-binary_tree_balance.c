#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if the tree is NULL
 * Tree's balance factor
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_H(tree->left);
	height_r = binary_tree_H(tree->right);

	return (height_l - height_r);
}

/**
 * binary_tree_H - Measures binary tree height
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 *
 */

size_t binary_tree_H(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_H(tree->left);
	height_r = binary_tree_H(tree->right);

	return ((height_l > height_r ? height_l : height_r) + 1);
}
