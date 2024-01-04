#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 *@node: A pointer to the node to find the sibling.
 * Return: A pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);

}
/**
 * binary_tree_uncle - Finds the uncle of a node in a tree.
 *@node: A pointer to the node to find the uncle.
 * Return: A pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
