#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if node is leaf.
 * @node: A pointer to the node to check.
 * Return: 1 if node is a leaf.
 *         Otherwise - 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
{
return (0);
}
else
{
return (1);
}

}
