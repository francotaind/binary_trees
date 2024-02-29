#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: The function deletes an entire binary tree, freeing all
 * its nodes from memory. If tree is NULL, it does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    /* Post-order traversal to delete nodes */
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    /* Delete current node */
    free(tree);
}
