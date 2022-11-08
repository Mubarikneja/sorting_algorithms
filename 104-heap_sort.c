#include "sort.h"
/**
  * heap_sort - heap 
  * @array: array 
  * @size: size
  */
void heap_sort(int *array, size_t size)
{
	int i, tmp;

	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, i, size, size);
	for (i = size -1; i >=0; i--)
	{
		tmp = array[0];
		array[0] = array[i];
		array[i] = tmp;
		print_array(array, size);
		heapify(array, i, 0, size);
	}
}
void heapify(int *array, int idx, int idx2, size_t size)
{
	int top = idx2;
	int prev = 2 * idx2 + 1;
	int apt = 2 * idx2 + 2;
	int tmp;

	if (prev < idx && array[prev] > array[top])
		top = prev;
	if (apt < idx && array[apt] > array[top])
		top = apt;
	if (top != idx2)
	{
		tmp = array[idx2];
		array[idx2] = array[top];
		array[top] = tmp;
		print_array(array, size);
		heapify(array, idx, top, size);
	}
}
