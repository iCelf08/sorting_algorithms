#include <stdio.h>
#include  <stdlib.h>
#include "sort.h"
/**
 * selection_sort - function sorts array with selection sort algorithm
 * @array: array of int to be sorted
 * @size: size of array
*/
void selection_sort(int *array, size_t size)
{
size_t i, j;
int temp;

for (i = 0; i < size - 1; i++)
{
for (j = i; j < size; j++)
{
if (array[j] < array[i])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
};
}
print_array(array, size);
}
}
