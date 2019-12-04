#include "binary_trees.h"

/**
 * power - power of a number
 * @base: numeric base
 * @times: exponent of the power
 * Return: The power
 */
int power(int base, int times)
{
    if (times == 0)
        return (1);
    else
        return (base * power(base, times - 1));     
}

/**
 * get_height - get absolute height
 * @tree: pointer to the tree
 * Return: Height of the tree
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t l_h;
	size_t r_h;
	size_t max_height;

	if (tree == NULL)
		return (0);

	l_h = get_height(tree->left);
	r_h = get_height(tree->right);
	max_height = (l_h > r_h) ? l_h : r_h;

	return (1 + max_height);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: Root node
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (tree == NULL)
		return (0);

	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return (1 + l_size + r_size);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1=perfect, 0=not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, size, perfect;

    if (tree == NULL)
        return (0);

    size = binary_tree_size(tree);
    height = get_height(tree);
    perfect = (size_t)(power(2, height) - 1);

    if (perfect == size)
        return (1);
    else
        return (0);
}