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
size_t mi;
int temp, swap;
if ( array == NULL )
return;
for (i = 0; i < size - 1; i++)
{
mi = i;
swap = 0;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[mi])
{
mi = j;
swap++;
}
}
temp = array[i];
array[i] = array[mi];
array[mi] = temp;
if (swap)
print_array(array, size);
}
}