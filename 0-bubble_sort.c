#include "sort.h"

/**
 * bubble_sort - Perfoms bubble sort on a given array of integers
 * @array: the array of numbers to be sorted
 * @size: the size of the array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * swap - swaps two integers
 * @x: the first integer
 * @y: the secong integer
 * Return: nothing
 */

void swap(int *x, int *y)
{
	int tmp = *x;

	*x = *y;
	*y = tmp;
}
