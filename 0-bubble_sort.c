#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t c, d, swap;

	for (c = 0 ; c < size - 1; c++)
  	{
    		for (d = 0 ; d < size - c - 1; d++)
    		{
      			if (array[d] > array[d+1])
      			{
        			swap = array[d];
        			array[d] = array[d+1];
        			array[d+1] = swap;
				print_array(array, size);
      			}
    		}				
  	}
}
