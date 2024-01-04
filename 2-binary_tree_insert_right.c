#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node.
 *@parent: A pointer to the node to insert the right-child in.
 *@value: the value to store in the new node.
 * Return: return a pointer to the created node, or NULL on failure or if no
 * 
 * Description: If parent already has a right-child, the new node takes it's
 *              place and the old right-child is set as the right-child of
 *              the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	return (node);
}
