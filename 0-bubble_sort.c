#include "sort.h"
/**
 * bubble_sort - sort an integer array
 * @array: the array to sort
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 1;
	int swap;

	while (array && i < size)
	{
		j = 1;
		while (j < size)
		{
			if  (array[j] < array[j - 1])
			{
				swap = array[j];
				array[j] = array[j - 1];
				array[j - 1] = swap;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
