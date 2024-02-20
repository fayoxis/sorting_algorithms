#include "sort.h"

/**
 * bubble_sort -  Sorting arrays of int  type in ascending order
 * using the bubble sort algorithm.
 *
 * This function takes an array of integers and sorts
 * them in ascending order using the bubble sort algorithm.
 * @array: arrays of integers to be sorted.
 * @size: numbers of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, num;
int temp;
bool swapped = true;
while (!array || size < 2)
return;

num = size;
while (swapped)
{
swapped = false;
for (i = 1; i < num; i++)
{
while (array[i - 1] > array[i])
{
temp = array[i - 1];
array[i - 1] = array[i];
array[i] = temp;
swapped = true;
print_array(array, size);
}
}
num--;
}
}
