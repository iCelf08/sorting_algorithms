#include <stddef.h>
#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - function sorts an array with buble style
 * @array: array of integers to be sorted #include <stdio.h>
 * @size: size of the array
 */
void bubble_sort(int array[], size_t size)
{
	size_t i, j;
	int temp;
	int swip;
if (array == NULL)
return;
swip = 0;
for (i = 0; i < size; i++)
{
for (j = 1; j <= size - 1; j++)
	{
		if (array[j] < array[j - 1])
		{
			temp = array[j - 1];
			array[j - 1] = array[j];
			array[j] = temp;
			swip = 1;
			print_array(array, size);
		}
	}
	if (swip == 0)
	break;
	}
}