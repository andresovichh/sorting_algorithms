#include "sort.h"

/**
 * selection_sort -  sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: The array to sort
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
int tmp;
size_t i, j = 0, jMin;
for (i = 0; i < size - 1; i++)
{
jMin = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[jMin])
{
jMin = j;

}
}
if (jMin != i)
{

tmp = array[jMin];
array[jMin] = array[i];
array[i] = tmp;
print_array(array, size);
}

}
}
