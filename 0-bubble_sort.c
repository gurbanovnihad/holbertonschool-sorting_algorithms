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

void swap(int *a, int *b);

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	j = 0;
	while(*(array + j++))
	{ 
		for (i = 0; i < size - 1; i++) {
			if (array[i] > array[i + 1])
				swap(&array[i], &array[i + 1]);
		}
	
	print_array(array, size);
	}
}
