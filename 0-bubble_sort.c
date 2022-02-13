#include "sort.h"


/**
 * bubble_sort - Sorts array of ints in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
size_t i = 0;
size_t newn = 0;
int tmp = 0;
size_t the_size = size;
int swapped = 1;
if (!array)
return;
while (swapped)
{
swapped = 0;
for (i = 1; i <= (size - 1); i++)
{
/** printf("getting here");*/
if (array[i - 1] > array[i])
{
tmp =  array[i - 1];
array[i - 1] = array[i];
array[i] = tmp;
swapped = 1;
print_array(array, the_size);
}
}
}
size = newn;
}
