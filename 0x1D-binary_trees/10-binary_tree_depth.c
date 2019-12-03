#include "binary_trees.h"

/**
 * get_depth - measures the absolute depth of a
 * node in a binary tree
 * @tree: node to measure
 * Return: Depth of the node
 */
size_t get_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + get_depth(tree->parent));
}

/**
 * binary_tree_depth - measures the depth of a node
 * in a binary tree
 * @tree: node to measure
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (get_depth(tree) - 1);
}
