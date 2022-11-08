#include "sort.h"
/**
  * selection_sort - selection sort 
  * @array: array to sort
  * @size: size
  */
void selection_sort(int *array, size_t size)
{
	size_t i, i2;
	int min_of, tmpe, ind;

	for (i = 0; i < size; i++)
	{
		min_of = array[i];
		for (i2 = i + 1; i2 < size; i2++)
		{
			if (min_of > array[i2])
			{
				min_of = array[i2];
				ind = i2;
			}
		}
		if (min_of != array[i])
		{
			tmpe = array[i];
			array[i] = min_of;
			array[ind] = tmpe;
			print_array(array, size);
		}
	}
}
