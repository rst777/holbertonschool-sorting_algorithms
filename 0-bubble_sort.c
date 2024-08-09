#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using Bubble Sort
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Description: This function implements the Bubble Sort algorithm.
 * It repeatedly steps through the list, compares adjacent elements, and
 * swaps them if they are in the wrong order. The pass through the list
 * is repeated until the list is sorted.
 */
void bubble_sort(int *array, size_t size)

{
	size_t i;
	size_t j;
	int temp;

/* Vérifie si le tableau est NULL ou contient moins de 2 éléments */
	if (array == NULL || size < 2)
	{
	return;
	}

/* Effectue le tri à bulles */
		for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{

		if (array[j] > array[j + 1])

/* Échange des éléments */
			{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;

 /* Affiche le tableau après chaque échange */
			print_array(array, size);
			}
		}
	}
}
