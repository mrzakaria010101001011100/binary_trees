#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return; // If tree is NULL, do nothing
    }
    else
    {
    // Recursively delete the left and right subtrees
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    }
    // After the subtrees are deleted, free the current node
    free(tree);
}
