#include "sort.h"

/**
 * @brief 
 * 
 * @param array 
 * @param lb 
 * @param ub 
 * @param size 
 */
void quicksort(int *array, int lb, int ub, size_t size)
{
int part = 0;

if (lb < ub)
{
part = partition(array, lb, ub, size);
quicksort(array, lb, (part - 1), size);
quicksort(array, part + 1, ub, size);
}
}

int partition(int *array, int lb, int ub, size_t size)
{
int pivot = array[ub];
int i = lb - 1;
int j, tmp;

for (j = lb; j <= ub; j++)
{
if (pivot >= array[j])
{
i++;
(array[i] ^= array[ub]), (array[ub] ^= array[i]), (array[i] ^= array[ub]);
tmp = array[j];
array[j] = array[i];
array[i] = tmp;
print_array(array, size);
/** array[i], array[j] = array[ub], array[i];*/
}
}
tmp = array[i + 1];
array[i + 1] = array[ub];
array[ub] = tmp;
tmp = array[ub];
array[ub] = array[i + 1];
array[i + 1] = tmp;

return (i + 1);


}


void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

quicksort(array, 0, size -1, size);
}