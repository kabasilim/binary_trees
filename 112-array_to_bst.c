#include "binary_trees.h"

/**
 * array_to_bst - function that builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of elements in @array
 * Return: A pointer to the root node of the created BST,
 * or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t a, b;
	bst_t *tree = NULL;


	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (array[b] == array[a])
				break;
		}
		if (b == a)
		{
			if (bst_insert(&tree, array[a]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
