#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return NULL; // Return NULL if parent is NULL
    
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)// If parent already has a left child

    if (parent->left != NULL)
    {
        // Set the new node's left child to the current left child of the parent
        new_node->left = parent->left;
        // Update the parent pointer of the current left child to point to the new node
        parent->left->parent = new_node;
    }
    else
    {
        // If parent does not have a left child, set the new node's left child to NULL
        new_node->left = NULL;
    }
        
    parent->left = new_node;

    // Set the new node's parent to the parent
    new_node->parent = parent;

    // Set the value of the new node
    new_node->n = value;

    return new_node; // Return a pointer to the new node
}
