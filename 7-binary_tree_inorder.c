#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;


	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
