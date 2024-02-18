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
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
			print_array(array, size);
		}
	}
}
