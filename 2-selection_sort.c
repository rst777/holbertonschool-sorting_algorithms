#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - Sorts an array of integers in ascending order using the
 * selection sort algorithm.
 *
 * @array: Pointer to the array of integers to be sorted.
 * @size: Number of elements in the array.
 *
 * Description:
 * This function implements the selection sort algorithm to sort an array
 * of integers in ascending order. It works by repeatedly finding the minimum
 * element from the unsorted part of the array and moving it to the beginning.
 * The process continues until the entire array is sorted.
 * After each iteration,
 * the function prints the current state of the array.
 */
void selection_sort(int *array, size_t size)

{
	size_t i, j, index;
	int temp;

/* Parcourt chaque élément du tableau sauf le dernier */
	for (i = 0; i < size - 1; i++)
	{

/* Supposer que le plus petit élément est à la position i */
		index = i;

/* Cherche le plus petit élément parmi les éléments restants */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			{

/* Met à jour l'index si un plus petit élément est trouvé */
				index = j;
			}
		}
/* Imprimer que si il y à eu échange */
		if (index != i)
		{
/* Échange l'élément courant avec le plus petit élément trouvé */
		temp = array[index];
		array[index] = array[i];
		array[i] = temp;
/* Affiche le tableau après chaque échange */
		print_array(array, size);
		}
	}
}
