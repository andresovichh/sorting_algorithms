#include "sort.h"
/**
 * partition - returns the pivot
 * @array: the array
 * @lbb: lower boundary
 * @ubb: upper boundary
 * @size: the size of the array
 * Return: the pivot
 */
int partition(int *array, int lbb, int ubb, size_t size)
{

int a, b, tmp, pivot;

pivot = array[ubb];

for (b = lbb, a = lbb - 1; b < ubb; b++)
{
if (array[b] < pivot)
{
a++;
tmp = array[a];
array[a] = array[b];
array[b] = tmp;
if (array[a] != array[b])
print_array(array, size);
}
}

tmp = array[a + 1];
array[a + 1] = pivot;
array[b] = tmp;
if (array[ubb] != array[a + 1])
print_array(array, size);
return (a + 1);
}
/**
 * quicksort - sorts the array recursively
 * @array: the array
 * @lb: lower boundary
 * @ub: upper boundary
 * @size: the size of the array
 */
void quicksort(int *array, int lb, int ub, size_t size)
{
int pivot;

if (lb < ub)
{
pivot = partition(array, lb, ub, size);
/** printf("pivot inside recur: %ld", pivot);*/
quicksort(array, lb, pivot - 1, size);
quicksort(array, pivot + 1, ub, size);
}

}


/**
 * quick_sort - sorts array using recursion and lomuto
 * @array: the array
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{

if (!array || size < 2)
return;

quicksort(array, 0, size - 1, size);
/** print_array(array, size); */
}
