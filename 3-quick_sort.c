#include "sort.h"
int partition(int *array, int lb, int ub, size_t size)
{

int start, end;
int tmp, pivot;

/** printf("size = %ld", size);*/
pivot = array[ub];
start = lb - 1;
end = ub;

/** printf("pivot is: %d \n", pivot); */
/** printf("getting here 1\n");*/
while (start < end)
{
/** printf("getting here 2 \n");*/
while(array[start] <= pivot)
{
start++;
/** printf("start = %ld \n", start);*/
}
while (array[end] > pivot)
{
/**printf("end = %ld \n", end);*/
end--;
/** printf("end = %ld \n", end);*/
}
if (start < end)
{
tmp = array[end];
array[end] = array[start];
array[start] = tmp;
print_array(array, size);
}
}
tmp = array[end];
array[end] = array[lb];
array[lb] = tmp;


/** print_array(array, size);*/

/** printf(" pivot: %ld \n", end);*/
return (end);
}

/**
 * @brief 
 * 
 *
 */

void quicksort(int *array, int lb, int ub, size_t size)
{
int location;

if (lb < ub)
{
location = partition(array, lb, ub, size);
/** printf("pivot inside recur: %ld", pivot);*/
quicksort(array, lb, location - 1, size);
quicksort(array, location + 1, ub, size);
}
}


/**
 * @brief 
 * 
 */
void quick_sort(int *array, size_t size)
{

if (!array || size < 2)
return;
/**printf("%d", partition(array, lb, ub, size));
printf("out of the pivot print");
quicksort(array, 0, size -1, size);*/
quicksort(array, 0, size -1, size);
}
