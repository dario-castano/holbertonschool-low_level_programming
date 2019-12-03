#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1=perfect, 0=not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int s_left, s_right;

    if (tree == NULL)
        return (0);
    
    if (tree->left != NULL && tree->right != NULL)
    {
        s_left = binary_tree_is_perfect(tree->left);
        s_right = binary_tree_is_perfect(tree->right);
        return ();
    }

}