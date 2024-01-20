#include "sort.h"
/**
 * swap_nodes - exchanges the values of two elements of type integer
 * @array: array
 * @a: integer
 * @b: integer
 * @size: size of the array
 */
void swap_nodes(int *array, int a, int b, size_t size)
{
	int temp;

	if (array[a] != array[b])
	{
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
		print_array(array, size);
	}
}
/**
 * divide_array - array partitioning
 * @array: array
 * @low: integer
 * @high: integer
 * @size: size of the array
 * Return: int
 */
int divide_array(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i = low, j;

	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			swap_nodes(array, i, j, size);
			i++;
		}
	}
	swap_nodes(array, i, high, size);
	return (i);
}
/**
 * quick_sort_recursive - function that sorts
 * an array of integers using recursion
 * @array: array
 * @low: integer
 * @high: integer
 * @size: size of the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int p_index;

	if (low > high)
	{
		return;
	}
	p_index = divide_array(array, low, high, size);
	quick_sort_recursive(array, low, p_index - 1, size);
	quick_sort_recursive(array, p_index + 1, high, size);
}
/**
 * quick_sort - function that sorts
 * an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: array
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
