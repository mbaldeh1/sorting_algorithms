#include "sort.h"

/**
 * swap - Function to swap two integers
 * @a: Integer 1
 * @b: Integer 2
 */
void swap(int a, int b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

/**
 * bubble_sort - Function to bubble sort an array of size n
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			swap(array[i], array[i + 1]);
			print_array(array, size);
		}
	}
}
