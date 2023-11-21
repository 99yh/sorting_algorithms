#include "sort.h"
/**
 * selection_sort - sort an integer array
 * @array: the array to sort
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 1;
	int min, minIdx;

	while (array && i < size)
	{
		j = i + 1;
		min = array[i];
		while (j < size)
		{
			if  (array[j] < min)
			{
				min = array[j];
				minIdx = j;
			}
			j++;
		}
		if (array[i] > min)
		{
			array[minIdx] = array[i];
			array[i] = min;
			print_array(array, size);
		}
		i++;
	}
}
