#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: Node to check
 * Return: Uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *mom, *grandma;

	if (node == NULL ||
		node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);

	mom = node->parent;
	grandma = node->parent->parent;

	if (mom == grandma->left)
		return (grandma->right);
	else if (mom == grandma->right)
		return (grandma->left);
	else
		return (NULL);
}
