#include "sort.h"
/**
  * shell_sort - shell sort
  * @array: array 
  * @size: size
  */
void shell_sort(int *array, size_t size)
{
	size_t nth, i, i2;
	int tmp;

	nth = 1;
	while (nth < size)
		nth = (nth * 3) + 1;
	nth = (nth - 1) / 3;
	while (nth > 0)
	{
		for (i = nth; i < size; i++)
		{
			tmp = array[i];
			for (i2 = i; i2 >= nth && array[i2 - nth] > tmp; i2 -= nth)
				array[i2] = array[i2 - nth];
			array[i2] = tmp;
		}
		nth = (nth - 1) / 3;
		print_array(array, size);
	}
}
