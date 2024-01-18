#include "sort.h"
#include <stddef.h>
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: for sorting
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j = size;
	int temp;


	if (array == NULL || size < 2)
		return;

	for (j = 1; j < size; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}

	}
}
