#include "sort.h"

/**
 * selection_sort - Selection sort
 * @array: Array
 * @size: Size
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	int tmp;
	size_t j = 0;
	int *x = NULL;
	int *y = NULL;
	int min_idx = 0;
	int swap;

	if (size <= 1)
		return;

	for (i = 0 ; i < size ; i++)
	{
		swap = 0;
		min_idx = i;
		x = &array[i];
		for (j = i ; j < size ; j++)
		{
			y = &array[j];
			if (*y < *x)
			{
				min_idx = j;
				x = &array[min_idx];
				swap = 1;
			}
		}
		if (swap == 1)
		{
			x = &array[i];
			y = &array[min_idx];
			tmp = *x;
			*x = *y;
			*y = tmp;
			print_array(array, size);
		}
	}
}
