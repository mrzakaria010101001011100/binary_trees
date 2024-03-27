#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 * Return: nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return; // If tree is NULL, do nothing
    }
    else
	{
		if (tree != NULL)
		{
            // Recursively delete the left and right
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
